#include<bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <stack>
#include <string>
using namespace :: std;

int main(void) {
    int test; cin >>  test;
    for(int _ = 0; _ < test; _++) {
        int n; cin >> n;
        string S; cin >> S;
        stack<char> St;
        for(char c: S) {
            if(St.empty()) {St.push(c);}
            else {
                if(c == St.top()) St.pop();
                else St.push(c);
            }
        }
        cout << St.size() << endl;
    }
    return 0;
}
