// Michael Pfeifer
// Version 04, 2018/02/17

#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <numeric>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

const ld  pi   = 4.0*atanl(1.0);
const int iinf = 1e9 + 10;
const ll  inf  = 1e18 + 10;
const int mod  = 1000000007;
const ld  prec = .000001;

#define enld endl
#define endl '\n'
#define pb push_back
#define debug(x) cout<<#x<<" -> "<<x<<'\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define umap unordered_map
#define uset unordered_set



void merge(vector<int>& v, vector<int>& v1, vector<int>& v2) {
    reverse(all(v1));
    reverse(all(v2));
    while(!v1.empty() || !v2.empty()) {
        if(!v1.empty()) {
            v.pb(v1.back());
            v1.pop_back();
        }
        if(!v2.empty()) {
            v.pb(v2.back());
            v2.pop_back();
        }
    }
}

void inshuffle(vector<int>& v) {
    vector<int> v1, v2;
    int mid = (v.size())/2;
    for(int i = 0; i < v.size(); i++) {
        if(i < mid) {
            v1.pb(v[i]);
        }
        else {
            v2.pb(v[i]);
        }
    }

    v.clear();
    merge(v, v2, v1);
}

void outshuffle(vector<int>& v) {
    vector<int> v1, v2;
    int mid = (v.size()+1)/2;
    for(int i = 0; i < v.size(); i++) {
        if(i < mid) {
            v1.pb(v[i]);
        }
        else {
            v2.pb(v[i]);
        }
    }

    v.clear();
    merge(v, v1, v2);
}

bool solved(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] != i) {
            return false;
        }
    }
    return true;
}

int main() {
    //file();
    //fast();

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        v[i] = i;
    }

    string s;
    cin >> s;
    bool in = (s == "in");

    int i = 0;
    while(true) {
        i++;
        if(in) {
            inshuffle(v);
        }
        else {
            outshuffle(v);
        }
        if(solved(v)) {
            break;
        }
    }

    cout << i << endl;

    return 0;
}
