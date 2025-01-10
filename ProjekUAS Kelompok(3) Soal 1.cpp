#include <iostream>
#include <iomanip>

using namespace std;

float determinant(float A[3][3]) {
    return A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
        A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
        A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
}


void adjoint(float A[3][3], float adj[3][3]) {
    adj[0][0] = A[1][1] * A[2][2] - A[1][2] * A[2][1];
    adj[0][1] = A[0][2] * A[2][1] - A[0][1] * A[2][2];
    adj[0][2] = A[0][1] * A[1][2] - A[0][2] * A[1][1];
    adj[1][0] = A[1][2] * A[2][0] - A[1][0] * A[2][2];
    adj[1][1] = A[0][0] * A[2][2] - A[0][2] * A[2][0];
    adj[1][2] = A[0][2] * A[1][0] - A[0][0] * A[1][2];
    adj[2][0] = A[1][0] * A[2][1] - A[1][1] * A[2][0];
    adj[2][1] = A[0][1] * A[2][0] - A[0][0] * A[2][1];
    adj[2][2] = A[0][0] * A[1][1] - A[0][1] * A[1][0];
}


bool inverse(float A[3][3], float inverse[3][3]) {
    float det = determinant(A);
    if (det == 0) {
        cout << "Matriks tidak memiliki invers (determinannya nol)." << endl;
        return false;
    }

    float adj[3][3];
    adjoint(A, adj);


    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            inverse[i][j] = adj[i][j] / det;

    return true;
}

void inverse(float A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(8) << setprecision(4) << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    float A[3][3] = {
        {4, 2, 8},
        {2, 1, 5},
        {3, 2, 4}
    };

    cout << "Matriks A: " << endl;
    inverse(A);


    float inv[3][3];

    if (inverse(A, inv)) {
        cout << "\nInvers dari matriks A adalah:" << endl;
        inverse(inv);
    }

    return 0;
}