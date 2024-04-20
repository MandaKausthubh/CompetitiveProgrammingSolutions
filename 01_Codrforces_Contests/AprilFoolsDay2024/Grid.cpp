#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(void) {
    vector<int> V;
    for(int i = 0; i < 21; i++) {
        string S; cin >> S;
        int count = 0;
        for(char c: S) count += (c == '1') ? 1 : 0;
        V.push_back(count);
    }
    int sum = 0;
    for(int i: V)
    {cout << i << " "; sum += i;}
    sort(V.begin(), V.end());
    cout << sum <<  V[13]<< endl;
    return 0;
}
