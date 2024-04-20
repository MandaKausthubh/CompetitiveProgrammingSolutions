#include <bits/stdc++.h>
#include <string>
using namespace std;

string timize(int n) {
    string S = to_string(n);
    if(n < 10) S = "0" + S;
    return S;
}

int main(void) {
    int T; cin >> T;
    while(T--) {
        string Raw;
        int hour, min;
        getline( cin, Raw, ':');
        hour = stoi(Raw);
        getline( cin, Raw, '\n');
        min = stoi(Raw);

        if(hour < 12) {
            if(hour == 0) hour = 12;
            cout << timize(hour) << ':' << timize(min) << " AM\n";
        } else {
            hour %= 12;
            if(hour == 0) hour = 12;
            cout << timize(hour) << ':' << timize(min) << " PM\n";
        }
    }
    return 0;
}
