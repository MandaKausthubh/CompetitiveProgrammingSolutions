#include<bits/stdc++.h>
#include <vector>
using namespace std;

#define MAX 1000001

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n, m, k; cin >> n >> m >> k;
        vector<int> A(n), B(n), Arr(MAX, 0), Brr(MAX, 0);
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            if(i < m) Arr[A[i]]++;
        }
        for(int i = 0; i < m; i++) {int x; cin >> x; Brr[x]++; B[i] = x;}

        int DP = 0, count = 0;

        for(int i = 0; i < m; i++) {
            DP += min(Arr[B[i]], Brr[B[i]]);
        }
        if(DP >= k) {count++;}
        for(int i = 1; i < n-m+1; i++) {
            int x = min(Brr[A[i-1]], Arr[A[i-1]] - 1) - min(Arr[A[i-1]], Brr[A[i-1]]); 
            Arr[A[i-1]]--;
            int y = min(Brr[A[i+m-1]], Arr[A[i+m-1]] + 1) - min(Arr[A[i+m-1]], Brr[A[i+m-1]]); 
            // cout << x << ' ' << y << ' ' << A[i-1] << ' ' << A[i+m-1] << endl;
            Arr[A[i+m-1]]++;
            DP = DP + x + y;
            if(DP >= k) { count++;}
        }

        cout << count << endl;
    }
    return 0;
}
