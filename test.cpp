#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<int>::iterator Lower( vector<int>::iterator begin, vector<int>::iterator end, int val) {
    auto iter = (begin + (end-begin)/2);
    if(*iter == val && (begin == iter || *(iter-1) != val)){
        return iter;
    } 
    else if ( *iter >= val ) {return Lower(begin, iter-1, val);}
    else {
        return Lower(iter+1, end, val);
    }
}

int main(void) {
    vector<int> V = {1,2,3,4,4,4,6,7};
    auto iter = Lower(V.begin(), V.end(), 4);
    auto iter1 = lower_bound(V.begin(), V.end(), 4);
    cout <<  *(iter-1) << ' ' << *(iter) << ' ' << *(iter+1) <<endl;
    cout << *(iter1-1) << ' ' <<  *(iter1+1) << ' ' << *(iter1+1) <<endl;
}
