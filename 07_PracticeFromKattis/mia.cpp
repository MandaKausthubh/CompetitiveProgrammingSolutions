#include <deque>
#include <ios>
#include <iostream>
#include <iterator>
#include <limits>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <vector>

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

template <class T> using vc = vector<T>;
template <class T, class S> using pr = pair<T, S>;
template <class T, class S> constexpr int inf = numeric_limits<int>::max() / 2;
constexpr ll llinf = numeric_limits<long long>::max() / 2;

template <typename T, typename S> constexpr T ifloor(const T a, const S b) {
  return a / b - (a % b && (a ^ b) < 0);
}
template <typename T, typename S> constexpr T iceil(const T a, const S b) {
  return ifloor(a + b - 1, b);
}

template <class T> void printvc(const vc<T> &A) {
  for (T &x : A)
    cout << x << " ";
  cout << '\n';
}

template <class T> string Binary(T x) {
  string S = "";
  while (x) {
    if (x & 1)
      S = '1' + S;
    else
      S = '0' + S;
    x >>= 1;
  }
  return S;
}

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) ((int)x.size())
#define forw(i,j,k) for (int i = j; i <= k; i++)
#define revfor(i,j,k) for (int i = j; i >= k; i--)
int solve();

int main(void) {
  ios_base::sync_with_stdio(false), cin.tie(0);
  // int n;
  while (solve()) {
    // solve();
  }
  return 0;
}

int Greater(int x, int y) {
    if(x == 21 || x == 12) {
        if(y == 21 || y == 12){
            return 0;
        } else {
            return 1;
        }
    }
    else if(y == 21 || y == 12) {
        if(x == 21 || x == 12){
            return 0;
        } else {
            return -1;
        }
    }
    else if(x/10 == x%10) {
        if(y%10 == y/10) return (x>y) ? 1: ((x==y) ? 0:-1) ;
        else return 1;
    }
    else if(y/10 == y%10) {
        if(x%10 == x/10) return (y>x) ? -1: ((x==y) ? 0:1) ;
        else return -1;
    }
    else {
        if(x > y) return 1;
        else if(x==y) return 0;
        else return -1;
    }
}

int solve() {
    int r1,r2,s1,s2; cin >> s1 >> s2 >> r1 >> r2;
    // cout << r1 << r2 << s1 << s2;
    if(r1==r2 && r2==s1 && s1==s2 && s2==0) return 0;
    int result = Greater(10*max(s1,s2)+min(s1,s2), 10*max(r1, r2) + min(r1,r2));
    if(result == 1) cout << "Player 1 wins.";
    else if (result == -1) cout << "Player 2 wins.";
    else cout << "Tie.";
    cout << endl;
    return 1;
}

