#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
    int test; std::cin >> test;
    for(int _ = 0; _ < test; _++) {
        int n, m;
        std::cin >> n >> m;
        std::vector<int> a(n), b(m);
        
        for(int &i: a) std::cin >> i;
        for(int &i: b) std::cin >> i;

        
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());

        if(n == 1) {std::cout << std::max(abs(a[0]-b[0]), abs(a[0]-b[m-1])) << '\n';continue;}

        int i = 1, j = m-2, k = 1;
        int dif = abs(a[0] - b [m-1]) + abs(a[n-1] - b[0]);

        while(k != n-1) {
            if(abs(a[k] - b[i]) > abs(a[k] - b[j])) {dif += abs(a[k] - b[i]); i++; k++;}
            else{
                dif += abs(a[k] - b[j]);
                j--; k++;
            }
            // std::cout << "a\n";
        }

        std::cout << dif << '\n';
    }
    return 0;
}
