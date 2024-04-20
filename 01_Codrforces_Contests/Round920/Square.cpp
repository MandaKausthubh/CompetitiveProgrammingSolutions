#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ostream>
int main(void) {
    int test; std::cin >> test;
    for(int _ = 0; _ < test; _++) {
        int x[4]; int y[4];
        for(int i = 0; i < 4; i++) {std::cin >> x[i] >> y[i];}
        int dif_x = 0; int dif_y = 0;
        for(int i = 1; i < 4; i++) {
            dif_x = std::max(abs(x[i] - x[0]), dif_x);
            dif_y = std::max(abs(y[i] - y[0]), dif_y);
        }
        std::cout << dif_y * dif_x << std::endl;
    }
    return 0;
}
