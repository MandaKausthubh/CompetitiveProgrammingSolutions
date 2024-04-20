#include <bits/stdc++.h>
#include <vector>
#define MOD 1000000007

using namespace::std;

// Defining Matrix Mulitplication:
vector<vector<long long int>> Matrix = {{0, 3}, {1, 2}};
vector<vector<long long int>> BaseMatrix = {{0, 3}, {1, 2}};

void Multiply(vector<vector<long long int>> &A,  vector<vector<long long int>> &B) {
    vector<vector<long long int>> T = {{1, 0}, {0, 1}};
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            T[i][j] = (A[i][0]*B[0][j] + A[i][1]*B[1][j])%MOD;
        }
    }

    A = T;
}

void MatrixExponetiation(int n) {
    if(n == 0) {
        Matrix = {{1, 0}, {0, 1}};
    } else if(n == 1) {
        Matrix = BaseMatrix;
    } else {
        if(n&1) {
            MatrixExponetiation(n/2);
            Multiply(Matrix, Matrix);
            Multiply(Matrix, BaseMatrix);
        } else {
            MatrixExponetiation(n/2);
            Multiply(Matrix, Matrix);
        }
    }
}

int main(void) {
    long long int n; cin >> n;
    MatrixExponetiation(n);
    cout << Matrix[0][0] << '\n';
    return 0;
}
