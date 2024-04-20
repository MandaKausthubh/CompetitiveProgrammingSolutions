#include <algorithm>
#include<bits/stdc++.h>
#include <cstdint>
#include <vector>
using namespace :: std;

#define int long long int
#define MOD 1000000007

int32_t main(void) {
    int T; cin >> T;
     while(T--){
        int n, k; cin >> n >> k;
        vector<int> V(n);
        int max_sum = 0;
        int current_sum = 0;
        int sum = 0;
        for(int &i: V) {
            cin >> i;
            if(i < 0) {max_sum = max(current_sum, max_sum); current_sum = 0;}
            else {current_sum = (i + current_sum)%MOD;}
            sum = (i + sum)%MOD;
        }
     }
    return 0;
}
