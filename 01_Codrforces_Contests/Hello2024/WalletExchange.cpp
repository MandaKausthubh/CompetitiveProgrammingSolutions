#include<bits/stdc++.h>
using namespace ::std;

int main(void) {
    
    int test; cin >> test;
    for(int _ = 0; _ < test; _++) {
        int a, b;
        cin >> a >> b;
        if((a+b)%2 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }
    
    return 0;
}
