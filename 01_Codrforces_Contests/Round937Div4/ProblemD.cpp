#include<bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

int DP[100005];

bool IsBinary(string S) {
    bool val = true;
    for(char c: S) {
        val = val && (c == '1' || c == '0');
    }
    return val;
}

bool BinaryProduct(int n) {
    // cout << n << ' ';

    if(IsBinary(to_string(n))) return true; 
    if(DP[n] != -1) return DP[n];
    bool Val = false;
    for(int i = 2; i <= sqrt(n) ; i++) {
        if(n%i == 0 && BinaryProduct((n/i)) && BinaryProduct(i)) Val |= true;
    }
    if(Val) DP[n] = 1;
    else DP[n] = 0;
    return Val;
}

int main(void) {
    int T; cin >> T;
    for(int i = 0; i < 100000; i++) DP[i] = -1;
    while(T--) {
        int S;
        cin >> S;
        if(BinaryProduct(S)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
