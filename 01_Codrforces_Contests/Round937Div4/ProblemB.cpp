#include <bits/stdc++.h>
using namespace std;

char Arr[] = {'#', '.'};

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << Arr[((j + i)) % 2] << Arr[((j + i)) % 2];
            } cout << '\n';
            for(int j = 0; j < n; j++) {
                cout << Arr[((j + i)) % 2] << Arr[((j + i)) % 2];
            } cout << '\n';
        }
    }
    return  0;
}
