#include <bits/stdc++.h>
using namespace std;

#define MAX_LEN 10000000
#define MOD 1000000007

int main(void) {
    int n; cin >> n;
    long long int zD = 1, zABC = 0;
    
    for(long long int i = 0; i < n; i++) {
        long long int nD = (3 * zABC)%MOD;
        long long int nABC = (2 * zABC + zD)%MOD;
        zD = nD;
        zABC = nABC;
    }

    cout << zD << endl;

    return 0;
}
