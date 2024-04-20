#include<bits/stdc++.h>
using namespace :: std;

const int M = 200000;

short DP[M];
int Array[M];

int main(void) {
    // bool DP[M];
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        DP[0] = 1;
        int last = 0;
        for(int i = 1; i <= n; i++) {
            cin >> Array[i];
            DP[i] = 0;
        }
        
        for(int i = 1; i <= n; i++) {
            if(DP[i-1]) {
                if(i + Array[i] <= n) {DP[(i+Array[i])] = 1;}
            } 
            if(i-Array[i]-1 >= 0 && DP[i-Array[i]-1]) {
                DP[i] = 1;
            }
        }

        if (DP[n])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
