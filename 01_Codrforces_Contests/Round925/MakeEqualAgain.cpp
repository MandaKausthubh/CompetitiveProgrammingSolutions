#include <algorithm>
#include <bits/stdc++.h>
using namespace :: std;

int A[1000000];
int n;

int MakeEqualAgain(int n) {
    if (n == 0) return 0;
    else {
        int i = 0, j = n - 1;
        while(A[i] == A[0] && i < n) {i++;}
        while(A[j] == A[n-1] && j > -1) {j--;}
        if(i == n) return 0;
        if(i == j - 1) return min(i + 1, n - j + 2);
        
        if(A[0] == A[n-1]) return j - i + 1;
        else {
            return min(j-2, n-i+1);
        }
    }
}

int main (void) {
    int test; cin >> test;
    for(int _ = 0; _ < test; _ ++) {
        cin >> n;
        for(int i = 0; i < n; i++) {cin >> A[i];}
        cout << MakeEqualAgain(n) << '\n';
    }
    return 0;
}
