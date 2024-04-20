#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int k, q; cin >> k >> q;
        int a = 0x3f3f3f3f;
        for(int i = 0; i < k; i++) {int x; cin >> x; a = min(a, x);}
        int A[q];
        for(int i = 0; i < q; i++) {cin >> A[i];}
        for(int i = 0; i < q; i++) {
            cout << min(a-1, A[i])<< ' ' ;
        }
        cout << endl;
    }
    return 0;
}
