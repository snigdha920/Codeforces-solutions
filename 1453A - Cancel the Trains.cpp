#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        set<int> ans;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            ans.insert(x);
        }
        for(int i=0; i<m; i++) {
            int x; cin >> x;
            ans.insert(x);
        }
        cout << n+m-ans.size() << endl;
    }
    return 0;
}
