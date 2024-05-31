#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n; cin >> n;
    while(n--) {
        int  n; cin >> n;
        vector<long long int> arr(n); for(long long int &x: arr) cin >> x;
        sort(arr.begin(), arr.end());
        long long int x = arr[0];
        long long int y = arr[1];
        
        if(y%x==0) {
            for(int i = 2; i < n; i++) {
                if(arr[i]%x) {y=arr[i]; break;}
            }
        }
        bool v = true;
        for(long long int i: arr) {
            v &= (i%x == 0) || (i%y == 0);
        }
        if(v) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
