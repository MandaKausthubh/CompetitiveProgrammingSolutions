#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int T; cin >> T; 
    while(T--) {
        int n, m, k;
        cin >> n >> m >> k;
        if( n > 1 && m > 1 && k < n - ((n/m) + ((n%m) != 0)))  cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}
