#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(void) {
    int T; cin >> T;
    while(T--) {
        int n, m, k; cin >> n >> m >> k;
        map<int, int> Arr, Brr;
        int V [n];
        for(int i = 0; i < n; i++) {
            cin >> V[i];
            if(i < m) {
                if(Arr.find(V[i]) == Arr.end()) Arr.insert({V[i], 1});
                else Arr[V[i]]++;
            }
        } 
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            if(i < m) {
                if(Brr.find(x) == Brr.end()) Brr.insert({x, 1});
                else Brr[x]++;
            }
        }

        int DP = 0, count = 0;

        for(auto x: Arr) {
            if(Brr.find(x.first) != Brr.end()) DP += min(x.second, Brr[x.first]);
        }

        if(DP >= k) {count++;}
        // cout << 0 << " " << DP << endl;

        for(int i = 1; i < n-m+1; i++) {
            if(Brr.find(V[i-1]) != Brr.end()) {
                DP += min(Brr[V[i-1]], Arr[V[i-1]]-1) - min(Brr[V[i-1]], Arr[V[i-1]]);
            }
            Arr[V[i-1]]--;
            
            if(Arr.find(V[i+m-1]) == Arr.end()) Arr.insert({V[i+m-1], 0});
            if(Brr.find(V[i+m-1]) != Brr.end()) {
                DP += min(Brr[V[i+m-1]], Arr[V[i+m-1]]+1) - min(Brr[V[i+m-1]], Arr[V[i+m-1]]);
            }
            // cout << i << ' ' << DP << endl;
            Arr[V[i+m-1]]++;
            if(DP >= k) count++;
        }

        cout << count << endl;
    }
     return 0;
}
