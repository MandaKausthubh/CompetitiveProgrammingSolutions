#include <algorithm>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define int long long int 

typedef struct {int height, children;} Node;

int32_t main(void) {
    int T; cin >> T;
    while(T--) {
        int a, b, c;
        cin >> a >> b >> c;
        queue<Node> Q;
        int maxheight = -1;

        if(a--) {
            Node NewNode = {0,2};
            Q.push(NewNode);
            cout << "Placed: 2\n";
        } else if (b--) {
            Node NewNode = {0, 1};
            Q.push(NewNode);
            cout << "Placed: 1\n";
        } else {
            Node NewNode = {0, 0};
            Q.push(NewNode);
            c--;
            cout << "Placed: 0\n";
        }

        while(!Q.empty()) {
            if(Q.front().children <= 0) { cout << "Poping:" << Q.front().children << '\n'; Q.pop();}
            if(!Q.empty()) {
                if(Q.front().children > 0) { 
                    Q.front().children--;
                    maxheight = max(maxheight, Q.front().height+1);
                    if(a > 0) {
                        Node NewNode = {Q.front().height+1 ,2};
                        Q.push(NewNode);
                        a--;
                        cout << "Placed: 2\n";
                    } else if (b > 0) {
                        Node NewNode = {Q.front().height+1 ,1};
                        Q.push(NewNode);
                        b--;
                        cout << "Placed: 1\n";
                    } else if (c > 0) {
                        Node NewNode = {Q.front().height+1 ,0};
                        Q.push(NewNode);
                        c--;
                        cout << "Placed: 0\n";
                    }
                    if(Q.front().children <= 0) { cout << "Poping1:" << Q.front().children << '\n'; Q.pop();}
                }
            }
            if(a+b+c == 0 && !Q.empty() && Q.front().children != 0) {
                cout << "Braking not enough Nodes\n";
                break;
            }
            if(a+b+c != 0 && !Q.empty() && Q.front().children == 0) {
                cout << "Braking too many Nodes\n";
                break;
            }
        }

        if(a+b+c == 0 && Q.front().children != 0) {cout << -1 << ' ' << a+b+c << endl;}
        if(a+b+c != 0 && Q.front().children == 0) {cout << -1 << ' ' << a+b+c << endl;}
        else cout << maxheight << endl;
    }
    return 0;
}
