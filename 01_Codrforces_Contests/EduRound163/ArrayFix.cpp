#include <bits/stdc++.h>
using namespace :: std;

int first(int x) {
    return x%10;
}

int second(int x) {
    return((x-x%10)/10);
}

int main (void) {
    int T; cin >> T; int Tc = T;
    while(T--) {
        int n; cin >> n;
        vector<int> V;
        V.push_back(0);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x; V.push_back(x);
        }
        V.push_back(100);
        
        bool splittable = true, possible = true;
        for(int i = 1; i <= n; i++) {
            if(V[i] > V[i+1]) {
                // Split V[i]: conditoin:
                // 1. V[i] > 10;
                if(V[i] > 10 && first(V[i]) >= second(V[i]) && splittable) {
                    // 2. Check if first(V[i-1]) < second(V[i])
                    if(first(V[i-1]) <= second(V[i]) && first(V[i]) <= V[i+1]) {
                        possible &= true;
                    } else {possible &= false; }
                } else {possible &= false;}
            }

            // Check and update splittablity
            splittable &= (second(V[i]) == 0 && first(V[i-1]) <= V[i]) || ((first(V[i-1]) <= second(V[i]) && (second(V[i]) <= first(V[i]))));
            // if(!splittable) cout << "here:" << V[i]  << '\n';

        }
        
        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
