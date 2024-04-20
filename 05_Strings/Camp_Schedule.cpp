#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = std::vector<int>;
using vll = std::vector<long long>;
using pii = std::pair<int, int>;
using pll = std::pair<int, int>;

template<class T> using vc = std::vector<T>;
template<class T, class S> using p = std::pair<T, S>;


constexpr int inf = std::numeric_limits<int>::max() / 2;
constexpr ll infll = std::numeric_limits<ll>::max() / 2;


#define all(x) (x).begin(), (x).end()
#define forw(i, j, k) for(int i = j; i <= k; i++)
#define revfor(i, j, k) for(int i = j; i >= k; i--)
#define pb push_back
#define sz(x) ((int)x.size())

template<typename T, typename S> constexpr T ifloor(const T a, const S b){return a/b-(a%b&&(a^b)<0);}
template<typename T, typename S> constexpr T iceil(const T a, const S b){return ifloor(a+b-1,b);}
 
template<class T> vc<T> operator+(const vc<T> &B, const vc<T> &A) {
    vc<T> C(min(sz(A), sz(B)));
    forw(i, 0, sz(C)-1) C[i] = A[i] + B[i];
    return C;
}


template<class T> vc<T> operator-(const vc<T> &B, const vc<T> &A) {
    vc<T> C(min(sz(A), sz(B)));
    forw(i, 0, sz(C)-1) C[i] = A[i] - B[i];
    return C;
}

template<class T> vc<T> operator* (const vc<T> &B, const vc<T> &A) {
    vc<T> C(min(sz(A), sz(B)));
    forw(i, 0, sz(C)-1) C[i] = A[i] * B[i];
    return C;
}


template<class T> void printvc( vc<T> A) {for(auto i: A) cout << i << ' '; cout << "\n";}



// segment trees are cool and easy:::
template<class t> class segtree {
    public:
        int n = 1e5;
        t array[2*((int) 1e5)];
        t (*oper) (t &x, t &y);
        t dummy;

        segtree(int numberofterms, t (*opera)(t &a, t &b), const t dummy) {
            n = numberofterms;
            oper = opera;
            dummy = dummy;
            forw(i, 0, 2*n) {array[i] = dummy;}
        }

        void fillsegtree(vc<t> vectortofill) {forw(i, n+1, 2*n) array[i] = vectortofill[i-n-1]; }

        void build() {
            revfor(i, n-1, 1) array[i] = oper(array[i<<1], array[i<<1|1]);
        }

        void modify(int p, t value) {
            for(array[p += n] = value; p > 1; p >>= 1) array[p>>1] = array[p] + array[p^1];
        }

        // [l,r] inclusive:::
        t query(int l, int r) {
            t res = 0;
            for(l+=n, r+=n; l < r; l >>= 1, r >>= 1) {
                if(l&1) res = oper(res, array[l--]);
                if(r&1) res = oper(res, array[r++]);
            }
        }
};


template<class t> class binaryindextree {
    public:
        t barray[2*((int)1e5)];
        t array[2*((int)1e5)];
        int n;

        binaryindextree(int sizeofarraymax, vc<t> a) {
            n = sizeofarraymax+1;
            forw(i, 1, n) array[i] = barray[i] = a[i-1];
            t (*oper) (t &x, t &y);
            int i = 1;
            while(i <= n) {}
        }
};


void solve();

int main(void) {
    ios_base::sync_with_stdio(0), cin.tie(0);
    solve();
    return 0;
}

void solve() {
    string s, t; cin >> s >> t;
    string rep = "";

    int c = sz(t)/2;
    while(c > 0) {
        bool val = true;
        forw(i, 0, c-1) val &= (t[i] == t[sz(t) - c + i]);
        if(val) break;
        c--;
    }

    forw(i,0,c-1) rep += t[i];
    string end = rep;

    forw(i, c, sz(t)-c-1) rep += t[i];

    int c0 = count(all(rep), '0');
    int c1 = sz(rep) - c0;
    int max0 = count(all(s), '0');
    int max1 = sz(s) - max0;
    int n0 = 0, n1 = 0;
    string ans = "";
    // cout << rep << ' ';
    while(n0 + c0 <= max0 && n1 + c1 <= max1) {
        ans += rep;
        n0 += c0;
        n1 += c1;
        // cout << rep << ' ';
    }
    // cout << '|';
    if(n0 + count(all(end), '0') <= max0 && n1 + count(all(end), '1') <= max1) {
        ans += end; n0 += count(all(end), '0'); n1 += count(all(end), '1');
        // cout << end << ":end ";
    }
    while(n0 < max0) {ans += "0"; n0++;}
    while(n1 < max1) {ans += "1"; n1++;}

    cout << ans << endl;
}
