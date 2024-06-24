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
void solve();

int main(void) {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}

void solve() {
    int n; cin >> n;
    vi a(n); for(int &x: a) cin >> x;

    for(int i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            if(i < n-1 && a[i-1] < a[i+1]) {
                cout << i+1 << endl;
            } else {
                cout << i << endl;
            }
            break;
        }
    }
}

