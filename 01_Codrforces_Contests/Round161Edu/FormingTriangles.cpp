#include <algorithm>
#include <iostream>
#include <vector>

int count(std::vector<long long int> &lengths, int i, int j) {
    if(i >= j - 1) return 0;
    // int k = i + ((j - i)/2);
    int counting = lengths.begin() - std::upper_bound(lengths.begin()+i, lengths.end()+j, lengths[j]-lengths[i]) + j;
    // std::cout << "Checking " << i << ' ' << j << '\n';
    // while(k > i && k < j) {
        
    //    if(k == i) {counting += j - i - 1; break;}

      //  if(lengths[k] > lengths[j] - lengths[i] && lengths[k-1] <= lengths[j] - lengths[i]) {
            // found you
        //    counting += j - k;
        //    std :: cout << "Found " << k << '\n';
        //    break;
        //}
        //else if(lengths[k] > lengths[j] - lengths[i]) {
            // move left
         //   k = i + ((k - i)/2);
         //   std::cout << "Moving left " << k << '\n';
        //} else {
            // move right
          //  k = k + ((j-k)/2);
            //std::cout << "Moving right " << k << '\n';
        //}
    //}

    return counting + count(lengths, i+1, j);
}

int main(void) {

    int test; std::cin >> test;
    for(int _ = 0; _ < test; _++) {
        int n; std::cin >> n; std::vector<int> V(n);
        for(int &i:V) std::cin >> i;
        
        std::sort(V.begin(), V.end());

        int value = 1;
        for(int i = 0; i < V[0]; i++) value *= 2;

        std::vector<long long int> W(n);
        W[0] = value;

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < V[i]-V[i-1]; j++) value *= 2;
            W[i] = value;
        }

        // for(int i = 0; i < n; i++) std::cout << W[i] << ' ';

        std::cout << '\n';

        std::cout << count(W, 0, n-1) << "\n";

    }
    return 0;
}
