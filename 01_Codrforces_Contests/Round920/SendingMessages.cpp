#include <iostream>
#include <vector>
int main(void) {
    int test ; std::cin >> test;
    for(int _ = 0; _ < test; _++) {
        long long int n, f, a, b;
        std::cin >> n >> f >> a >> b;
        //float x = b/(float)a;
        std::vector<int> m(n);
        for(int &y: m) std::cin >> y;
        if(m[0] * a > b) f -= b;
        else f -= (m[0])*a;
        for(int i = 1; i < n; i++) {
            if((m[i] - m[i-1]) * a > b) f -= b;
            else f -= (m[i] - m[i-1])*a;
            // std::cout << float
        }
        if(f > 0) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
