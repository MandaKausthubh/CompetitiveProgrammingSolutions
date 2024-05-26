#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) 
{
    int TC; cin >> TC;
    while(TC--) {
        int n; cin >> n;
        vector<long long int> arr(n); for(long long int &x: arr) cin >> x;
        auto it = arr.begin();
        for(; it != arr.end()-1; it++) {
            if(*it > *(it+1)) break;
        }
        // cout << *it << *(it+1) << '\n';
        if(is_sorted(arr.begin(), arr.end()) || (is_sorted(it+1, arr.end()) && arr[0] >= arr[n-1])) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
