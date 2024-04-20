#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int count = 1, min_count = n;
        vector<int> V(n);
        for(int i = 0; i < n; i++) {
            if(i == 0) {cin >> V[i];}
            else {
                cin >> V[i];
                if(V[i] == V[0]) count ++;
                else {
                    min_count = min(min_count, count);
                    count = 0;
                }
            }
        } min_count = min(count, min_count);
        cout << ((min_count != n) ? min_count : -1) << endl;
    }
    return 0;
}
