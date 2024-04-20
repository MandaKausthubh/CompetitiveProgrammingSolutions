#include <bits/stdc++.h>
#include <ios>
#include <unordered_set>
using namespace std;


int32_t main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T; cin >> T;
    while(T--) {
        int n, x, y;
        cin >> n >> x >> y;
        // vector<bool> V(n+1);
        unordered_set<int> S;
        int extra = 0;
        int extra_y = 0;
        
        for(int i = 0; i < x; i++) {
            int x; cin >> x;
            // V[x] = true;
            S.insert(x);
            if(S.find(x-1) != S.end() && S.find(x+1) != S.end() && x+1 <= n && x-1 >= 1) extra--;
            if(x > 2 && S.find(x-2) != S.end() && S.find(x-1) == S.end() ) {extra++;}
            if(x + 2 <= n && S.find(x+2) != S.end() && S.find(x+1) == S.end() ) {extra++;}

            if(S.find(x-1) != S.end() && S.find(x+1) != S.end() && x+1 <= n && x-1 >= 1) extra_y--;
            if(x > 2 && S.find(x-2) != S.end() && S.find(x-1) == S.end() ) {extra_y++;}
            if(x + 2 <= n && S.find(x+2) != S.end() && S.find(x+1) == S.end() ) {extra_y++;}

        }
        
        
        if(S.find(1) == S.end() && S.find(n) != S.end() && S.find(2) != S.end()) extra++;
        if(S.find(n) == S.end() && S.find(1) != S.end() && S.find(n-1) != S.end()) extra++;
        
        cout << x - 2 + extra << endl;
    }
    return 0;
}
