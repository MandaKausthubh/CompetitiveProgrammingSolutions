#include<bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long

int Arr[200005];

int32_t main(void) {
    int T; cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        for(int i = 0; i < n; i++) {
            cin >> Arr[i];
        }
        int numberOfShips = 0;

        int x = (k+1)/2, y = (k)/2;
        // cout << x << ' ' << y << endl;

        int i = 0, j = n-1;

        while(i < n && x > 0) {
            if(x >= Arr[i]) {
                numberOfShips++;
                // cout << "Sunk f:" << i << endl;
                x -= Arr[i]; i++;
            } else break;
        }

        while(j >= 0 && y > 0) {
            if(y >= Arr[j]) {
                numberOfShips++;
                // cout << "Sunk b:" << j << endl;
                y -= Arr[j]; j--;
            } else break;
        }

        if(i == j && i != n && j != -1) {
            if(Arr[i] <= x+y) numberOfShips++;
        }

        if(j < i) cout << n << endl;
        else {
            cout << numberOfShips << endl;
        }
    }
    return 0;
}
