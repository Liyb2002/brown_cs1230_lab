#version 330 core

in vec3 vertex;                 // The position of the vertex, in camera space
in vec3 vertexToLight;          // Vector from the vertex to the light
in vec3 vertexToCamera;         // Vector from the vertex to the eye
in vec3 eyeNormal;		// Normal of the vertex, in camera space

uniform samplerCube envMap;	// The cube map containing the environment to reflect
uniform vec4 ambient;		// The ambient channel of the color to reflect
uniform vec4 diffuse;		// The diffuse channel of the color to reflect
uniform vec4 specular;		// The specular channel of the color to reflect

uniform mat4 model;             // model matrix
uniform mat4 view;              // view matrix
uniform mat4 mvp;               // model view projection matrix

uniform float r0;		// The Fresnel reflectivity when the incident angle is 0
uniform float m;		// The roughness of the material


out vec4 fragColor;
float k = 0.2;

vec3 lightColor = vec3(1, 1, 1);

vec4 testColor() {
    return vec4(0.1,0.2,0.5,1.);
}

vec4 CookTorrance(vec4 ambient,
        vec4 diffuse,
        vec3 normal,
        vec3 lightDir,
        vec3 viewDir,
        vec4 specular)
{
        float NdotL = max(0, dot(normal, lightDir));
        float Rs = 0.0;
        if (NdotL > 0)
        {
                vec3 H = normalize(lightDir + viewDir);
                float NdotH = max(0, dot(normal, H));
                float NdotV = max(0, dot(normal, viewDir));
                float VdotH = max(0, dot(lightDir, H));

                // Fresnel reflectance
                float F = pow(1.0 - VdotH, 5.0);
                F *= (1.0 - r0);
                F += r0;

                // Microfacet distribution by Beckmann
                float m_squared = m * m;
                float r1 = 1.0 / (4.0 * m_squared * pow(NdotH, 4.0));
                float r2 = (NdotH * NdotH - 1.0) / (m_squared * NdotH * NdotH);
                float D = r1 * exp(r2);

                // Geometric shadowing
                float two_NdotH = 2.0 * NdotH;
                float g1 = (two_NdotH * NdotV) / VdotH;
                float g2 = (two_NdotH * NdotL) / VdotH;
                float G = min(1.0, min(g1, g2));

                Rs = (F * D * G) / (3.14 * NdotL * NdotV);
        }
        return ambient + diffuse + specular;
}

void main()
{
    vec3 n = normalize(eyeNormal);
    vec3 l = normalize(vertexToLight);
    vec3 cameraToVertex = normalize(vertex); //remember we are in camera space!

    //TODO: fill the rest in

    fragColor = CookTorrance(ambient, diffuse,
                    n,
                    l,
                    cameraToVertex,
                    specular);


  //  fragColor = testColor();
}



