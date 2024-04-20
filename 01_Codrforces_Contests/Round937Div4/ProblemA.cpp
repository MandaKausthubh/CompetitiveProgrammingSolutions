#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a < b && b < c) cout << "STAIR\n";
        else if(a < b && b > c) cout << "PEAK\n";
        else cout << "NONE\n";
    }
    return 0;
}
