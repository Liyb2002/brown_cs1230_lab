#include "Eigen/Core"
#include "iostream"

using namespace std;
using namespace Eigen;

int main() {
    cout << "Eigen version: " << EIGEN_MAJOR_VERSION << "." << EIGEN_MINOR_VERSION << endl;
    Matrix3f A;
    A << 1.0f, 0.0f, 0.0f,
         0.0f, 1.0f, 0.0f,
         0.0f, 0.0f, 1.0f;

    Matrix4d B;
    for (int col = 0; col < 4; ++col) {
        for (int row = 0; row < 4; ++row) {
            B(row, col) = 0.0;
        }
    }

    Matrix4f M1 = Matrix4f::Random();
    Matrix4f M2 = Matrix4f::Constant(2.2);
    cout << M1 + M2 << endl;

    typedef Matrix<float, 3, 1>  Vector3f;
    typedef Matrix<double, 4, 1> Vector4d;

    Vector3f v;

    // Comma initialization
    v << 1.0f, 2.0f, 3.0f;

    // Coefficient access
    cout << v(2) << endl;

    // Vectors of length up to four can be initialized in the constructor
    Vector3f w(1.0f, 2.0f, 3.0f);

    // Utility functions
    Vector3f v1 = Vector3f::Ones();
    Vector3f v2 = Vector3f::Zero();
    Vector4d v3 = Vector4d::Random();
    Vector4d v4 = Vector4d::Constant(1.8);

    // Arithmetic operations
    cout << v1 + v2 << endl << endl;
    cout << v4 - v3 << endl;

    // Scalar multiplication
    cout << v4 * 2 << endl;

    // Equality
    // Again, equality and inequality are the only relational
    // operators that work with vectors
    cout << (Vector2f::Ones() * 3 == Vector2f::Constant(3)) << endl;



    return 0;
}
