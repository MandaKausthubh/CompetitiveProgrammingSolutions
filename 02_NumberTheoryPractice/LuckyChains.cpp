#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace :: std;
#define max_num 100000

int main(void) {
	int test; cin >> test;
	for(int i = 0; i < test; i++) {
		int x, y; cin >> x >> y;
		if(y % x == 0) {cout << "0\n"; continue;}
		else if(y - x == 1) {cout << "-1\n"; continue;}
		else {
			// if x + k and y + k have comman factor `a` then (x+k) == ra and (y+k) == sa then x - y == a(r - s) then we just search for the factors of x-y to find the answer.
			int dif = y - x; int k = max_num;
			int limit = sqrt(dif);
			for(int i = 2; i <= limit; i++) {
				if(x % i == y % i ) {k = min(i - (x % i), k);}
			}
			cout << k << endl;
		}
	}
	return 0;
}
