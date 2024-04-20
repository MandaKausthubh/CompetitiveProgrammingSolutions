#include <bits/stdc++.h>
using namespace std;

bool Checker(int n, int s, string S) {
    int count = 0;
    for(int i = 0; i < s; i++) {
        if(S[i] != S[i%n]) count++;
    }

    if(count < 2) return true;
    
    int count1 = 0;
    for(int i = 0; i < s; i++) {
        if(S[i] != S[(i%n) + (n)]) count1++;
    }
    
    return (count1) < 2;
}

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        string S; cin >> S;
        
        int min_size = n;
        for(int i = 1; i < n; i++) {
            if(n % i == 0 && Checker(i, n, S)) {
                min_size = i;
                break;
            }
        }
        cout << min_size << endl;
    }
    return 0;
}
