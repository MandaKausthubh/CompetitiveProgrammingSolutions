#include<bits/stdc++.h>
using namespace std;

int main(void) {
    short T; cin >> T;
    while(T--) {
        string S;
        cin >> S;
        bool is = false, t = false;
        for(int i = 1; i < S.size(); i++) {
            if(S[i] == 't' && S[i-1] == 'i' && !is) {
                cout << "YES\n";
                is = true;
                break;
            }
        }
        if(!is) cout <<"NO\n";
    }
    return 0;
}
