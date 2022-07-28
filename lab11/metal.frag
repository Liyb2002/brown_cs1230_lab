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

vec3 phong(vec3 lightDirection, vec3 normal){

          // ambient
          float k_a = 0.6;
          vec3 i_a = vec3(0.7, 0.7, 0);
          vec3 ambient = k_a * i_a;

          // diffuse
          float k_d = 0.5;
          float dotLN = clamp(dot(lightDirection, normal), 0., 1.);
          vec3 i_d = vec3(0.7, 0.5, 0);
          vec3 diffuse = k_d * dotLN * i_d;

          return ambient + diffuse;
}

//Fresnel
vec3 Fresnel(vec3 BaseColor, float Metalness, float b) {
    vec3 F0 = mix(vec3(0.04), BaseColor, Metalness);
    return F0 + (1.0 - F0) * pow(1.0 - b, 5.0);
}

//Beckmann
float Beckmann(float NdotH, float Roughness) {
    float a = Roughness * Roughness;
    float a2 = a * a;
    float r1 = 1.0 / (4.0 * a2 * pow(NdotH, 4.0));
    float r2 = (NdotH * NdotH - 1.0) / (a2 * NdotH * NdotH);
    return r1 * exp(r2);
}

//Geometric Attenuation
float GCT(float NdotL, float NdotV, float NdotH, float VdotH) {
    float G1 = (2.0 * NdotH * NdotV) / VdotH;
    float G2 = (2.0 * NdotH * NdotL) / VdotH;
    return min(1.0, min(G1, G2));
}

// Cook-Torrance
vec3 CookTorrance(vec3 N, vec3 V, vec3 H, vec3 L) {
    float NdotH = max(0.0, dot(N, H));
    float NdotV = max(1e-7, dot(N, V));
    float NdotL = max(1e-7, dot(N, L));
    float VdotH = max(0.0, dot(V, H));

    float D = Beckmann(NdotH, 0.1);

    float G = GCT(NdotL, NdotV, NdotH, VdotH);
    vec3 F = Fresnel(vec3(1.0,1.0,1.0), 0.0, VdotH);

    return (F / 3.1415) * (D * G) / (4.0 * NdotL * NdotV);
}

void main()
{
    vec3 n = normalize(eyeNormal);
    vec3 l = normalize(vertexToLight);
    vec3 cameraToVertex = normalize(vertex); //remember we are in camera space!


    //TODO: fill the rest in
    vec3 color = phong(-l,n);
    vec3 specular = clamp(CookTorrance(n,l,(cameraToVertex+l)/2,cameraToVertex), 0.3, 1.);
    fragColor = vec4(color.x+specular.x,color.y+specular.y,color.z+specular.z,1.0);


  //  fragColor = testColor();
}



