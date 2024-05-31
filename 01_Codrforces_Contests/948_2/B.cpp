#include <ios>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <numeric>
#include <iterator>
#include <limits>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string.h>

using namespace std;

using ll = long long int;
using u32 = unsigned int;
using u64 = unsigned long long;
using i128 = __int128;
using u128 = unsigned __int128;
using vi = vector<int>;
using vll = vector<long long int>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

template<class T> using vc = vector<T>;
template<class T, class S> using pr = pair<T,S>;
template<class T, class S> 
constexpr int inf = numeric_limits<int>::max() / 2;
constexpr ll llinf = numeric_limits<long long>::max() / 2;

template<typename T, typename S> constexpr T ifloor(const T a, const S b) {return a/b - (a%b && (a^b)<0);}
template<typename T, typename S> constexpr T iceil(const T a, const S b) {return ifloor(a+b-1,b);}

template<class T> void printvc(const vc<T> &A) {
    for(T &x: A) cout << x << " ";
    cout << '\n';
}

template<class T> string Binary(T &x) {
    string S = "";
    while(x) {
        if(x&1) S =  '1' + S;
        else S = '0' + S;
        x >>= 1;
    }
    return S;
}

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int) x.size())
#define forw(x,y,z) for(int i = j; i =< k; i++)
#define revfor(x,y,z) for(int x=y;x>=z;x--)
void solve();

int main(void) {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    while(n--) {solve();}
    return 0;
}

void solve() {
    int x; cin >> x;
    vc<int> V;
    string S = Binary(x);
    int count = 0;
    string temp = "";
    revfor(i, sz(S)-1, 0) {
        if(S[i] == '0') {
        }
    }
}

