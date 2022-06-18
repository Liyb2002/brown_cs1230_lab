#include "terrain.h"

#include <math.h>
#include "gl/shaders/ShaderAttribLocations.h"

Terrain::Terrain() : m_numRows(100), m_numCols(m_numRows), m_isFilledIn(false)
{
}


/**
 * Returns a pseudo-random value between -1.0 and 1.0 for the given row and
 * column.
 */
float Terrain::randValue(int row, int col)
{
    return -1.0 + 2.0 * glm::fract(sin(row * 127.1f + col * 311.7f) * 43758.5453123f);
}


/**
 * Returns the object-space position for the terrain vertex at the given row
 * and column.
 */
glm::vec3 Terrain::getPosition(int row, int col)
{
    glm::vec3 position;
    position.x = 10 * row/m_numRows - 5;
    position.z = 10 * col/m_numCols - 5;


    // TODO: Adjust position.y using value noise.


    //task2
   // int height = randValue(newRow, newCol);

    //Get four position values


    float amplitude = 1.0;
    float boxSize = 20.0;


    for(int i=0; i<3; i++){
    float x_frac = glm::fract(col / static_cast<float>(boxSize));
    float y_frac = glm::fract(row / static_cast<float>(boxSize));
    x_frac = x_frac*x_frac*(3-2*x_frac);
    y_frac = y_frac*y_frac*(3-2*y_frac);

    float yA = randValue(row/boxSize -1, col/boxSize -1);
    float yB = randValue(row/boxSize -1, col/boxSize);
    float yC = randValue(row/boxSize, col/boxSize-1);
    float yD = randValue(row/boxSize, col/boxSize );

    float t1 = glm::mix(yA, yB, x_frac);
    float t2 = glm::mix(yC, yD, x_frac);
    float t3 = amplitude * glm::mix(t1,t2, y_frac);

    amplitude = amplitude/2;
    boxSize = boxSize/2;

    position.y += t3;
    }

    return position;
}


/**
 * Returns the normal vector for the terrain vertex at the given row and
 * column.
 */
glm::vec3 Terrain::getNormal(int row, int col)
{
    // TODO: Compute the normal at the given row and column using the positions
    //       of the neighboring vertices.

    glm::vec3 p = getPosition(row, col),
    p1 = getPosition(row, col + 1),
    p2 = getPosition(row+1, col+1),
    p3 = getPosition(row+1, col),
    p4 = getPosition(row+1, col-1),
    p5 = getPosition(row, col-1),
    p6 = getPosition(row-1, col-1),
    p7 = getPosition(row-1, col),
    p8 = getPosition(row-1, col+1);

    glm::vec3 norm(0,0,0);
    norm += glm::normalize(glm::cross(p1 - p, p2 - p));
    norm += glm::normalize(glm::cross(p2 - p, p3 - p));
    norm += glm::normalize(glm::cross(p3 - p, p4 - p));
    norm += glm::normalize(glm::cross(p4 - p, p5 - p));
    norm += glm::normalize(glm::cross(p5 - p, p6 - p));
    norm += glm::normalize(glm::cross(p6 - p, p7 - p));
    norm += glm::normalize(glm::cross(p7 - p, p8 - p));
    norm += glm::normalize(glm::cross(p8 - p, p1 - p));


    return glm::normalize(norm);
}

bool Terrain::isFilledIn() {
    return m_isFilledIn;
}

/**
 * Initializes the terrain by storing positions and normals in a vertex buffer.
 */
std::vector<glm::vec3> Terrain::init() {
    // Initializes a grid of vertices using triangle strips.
    int numVertices = (m_numRows - 1) * (2 * m_numCols + 2);
    std::vector<glm::vec3> data(2 * numVertices);
    int index = 0;
    for (int row = 0; row < m_numRows - 1; row++) {
        for (int col = m_numCols - 1; col >= 0; col--) {
            data[index++] = getPosition(row, col);
            data[index++] = getNormal  (row, col);
            data[index++] = getPosition(row + 1, col);
            data[index++] = getNormal  (row + 1, col);
        }
        data[index++] = getPosition(row + 1, 0);
        data[index++] = getNormal  (row + 1, 0);
        data[index++] = getPosition(row + 1, m_numCols - 1);
        data[index++] = getNormal  (row + 1, m_numCols - 1);
    }

    return data;
}


/**
 * Draws the terrain.
 */
void Terrain::draw()
{
    openGLShape->draw();
}
