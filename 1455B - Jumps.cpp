#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        ll x; cin >> x;
        ll steps = 0;
        while((steps*(steps+1))/2 < x) {
            steps++;
        }
        if((steps*(steps+1))/2 == x+1) {
            steps++;
        }
        cout << steps << endl;
    }
    return 0;
}
