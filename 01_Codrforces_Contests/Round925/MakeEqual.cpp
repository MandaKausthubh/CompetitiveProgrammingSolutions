#include<bits/stdc++.h>
#include <stack>
using namespace :: std;

int main(void) {
    int test; cin >> test; 
    for(int _ = 0; _ < test; _ ++) {
        stack<long long int> S;
        long long int n, s = 0; cin >> n;
        vector<long long int> v(n);
        for(long long int i = 0; i < n; i++) {
            cin >> v[i]; s += v[i];
        }
        
        long long int i = 0;
        // cout << "A";
        while(i < n) {
            long long int x = v[i] * n - s;
            if(x == 0) {i++; continue;}
            if(S.empty()) {S.push(x); i++; continue;}
            if(x < S.top() && x < 0) {v[i] = v[i] + (S.top()/n); S.pop();}
            else {
                S.push(x); i++;
            }
        }

        if(S.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
