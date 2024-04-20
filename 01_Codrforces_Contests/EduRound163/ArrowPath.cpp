#include<bits/stdc++.h>
using namespace :: std;

char V[2][200001];
bool DP[2][200001];

void BuildDP(int n, int m, int k) {
    // Using simple BFS
    if(n > -1 && n < 2 && DP[n][m] == false) {
        DP[n][m] = true;
        
    }
}

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n; 
        for(int i = 0; i < n; i++) {
            cin >> V[0][i];
            DP[0][i] = false;
        }
        for(int i = 0; i < n; i++) {
            cin >> V[1][i];
            DP[0][i] = false;
        }

        // Build DP:


    }
}
