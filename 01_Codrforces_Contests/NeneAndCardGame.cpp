#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int A[n+1];
        int count = 0;

        for(int i = 0; i < n+1; i++) A[i] = 0;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            A[x]++;
            if(A[x] >= 2) count++; 
        }

        cout << count << endl;
    }
    return 0;
}
