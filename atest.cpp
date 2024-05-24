#include <map>
#include <iostream>
#include <utility>
using namespace std;

int main(void) {
    map<pair<int, int>, int> M;
    M[make_pair(1,2)] = 3;
    cout << M[make_pair(1,2)] << ' ' << M[make_pair(1,1)] << endl;
    return 0;
}
