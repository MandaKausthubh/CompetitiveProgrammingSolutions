#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int i = 1, sum = n* n*(n+1)/2, oper = 0;
        
        
        int c = n - 1, s = 2, turn = n;
        for(int i = n; i > 0; i--) {
            for(int j = 0; j < i-1 ; j++) {
                sum += ((i + 1) * i / 2) - ((i)*(j+1));
                turn--;
                if(turn == 0) {
                    break;
                }
            }
            if(turn == 0) break;
            s = (s==2) ? 1 : 2;
        }



        cout << sum << ' ' << min(2*n, n*(n+1)/2) << endl;

        for(int i = 0; i < n; i++) {
            cout << 1 << ' ' << (i+1) << ' ';
            for(int i = 0; i < n; i++) cout << i+1 << ' ';
            cout << endl;
        }

        c = n - 1, s = 2, turn = n;

        for(int i = n-1; i > 0; i--) {
            for(int j = 0; j < i ; j++) {
                cout << s << ' ' << j+1 << ' ';
                for(int k = 0; k < n; k++) cout << k+1 << ' ';
                cout << endl; turn--;
                if(turn == 0) {
                    break;
                }
            }
            if(turn == 0) break;
            s = (s==2) ? 1 : 2;
        }

    }
    return 0;
}
