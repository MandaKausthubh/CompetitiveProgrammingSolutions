#include <iostream>
#include <ostream>
#include <string>
int main(void) {
    int test; std::cin >> test;
    for(int _ = 0; _ < test; _++) {
        int n; std::cin >> n;
        std::string input, target; std::cin >> input >> target;
        int cats = 0, catf = 0;
        for(int j = 0; j < n; j++) {
            if(input[j] == '1') cats += 1;
            if(target[j] == '1') catf += 1;
        }

        if(cats >= catf) {
            // std::cout << "a\n";
            int swaps=0;
            for(int j = 0; j < n; j++) {
                if(target[j] == '1' && input[j] == '0') swaps += 1;
            }
            //std::cout << cats << ' ' << catf << ' ' << swaps << '\n';
            std::cout << cats - catf + swaps << std::endl;
        }
        else {
            // std::cout << "b\n";
            int swaps=0;
            for(int j = 0; j < n; j++) {
                if(input[j] == '1' && target[j] == '0') swaps += 1;
            }
            std::cout << catf - cats + swaps << std::endl;

        }

    }
    return 0;
}
