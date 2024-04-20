#include<bits/stdc++.h>
#include <string>
using namespace std;


int main(void) {
    int T; cin >> T;
    while(T--) {
        string x, y; cin >> x >> y;
        string a = "", b = ""; int count = 0;

        for(int i = 0; i < x.length(); i++) {
            char maxi = (x[i] > y[i]) ? x[i] : y[i];
            char mini = (x[i] <= y[i]) ? x[i] : y[i];
            if(count == 0) {

                // Place the largest to a:
                a += maxi;
                b += mini;
                if(maxi != mini) count++;

            } else {
                
                a += (mini);
                b += (maxi);
            }
        }
        cout << a << '\n' << b << '\n';
    }
    return 0;
}
