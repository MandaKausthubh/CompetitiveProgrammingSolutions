#include<bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace :: std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<long long int> V(n);

        for(long long int &i: V) cin >> i;

        sort(V.begin(), V.end());

        int k = ceil(n/2.0)-1;
        int k1 = k;
        int count = 0;
        while(k1 < n && V[k1++] == V[k]) {
            count++;
        }

        cout << count << endl;
    }
    return 0;
}
