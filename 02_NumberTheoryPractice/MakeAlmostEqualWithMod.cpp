#include<bits/stdc++.h>
#include <vector>
using namespace :: std;

int ValueOfK(int n, vector<long long int> V) {
    bool even = false, odd = false;
        for(int x:V) {
            if(x % 2 == 1) odd |= 1;
            else even |= 1;
        }

        if(odd && even) return 2;
        else {
            if(odd) {
                
            }
            else {
                
                for(long long int &x: V) {x /= 2;}
                return 2*ValueOfK(n, V);
            }
        }
        return 0;
}

int main(void) {
    int test; cin >> test;
    for(int i = 0; i < test; i++) {
        int n; cin >> n;
        vector<long long int> V(n);
        for(long long int &x: V) cin >> x;

        
    }
    return 0;
}
