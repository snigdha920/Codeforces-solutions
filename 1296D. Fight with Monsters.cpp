#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define read(x) scanf("%d", &x)
#define mod 1000007

int main() {
    int t; t=1;
    while(t--) {
        int n, a, b, k;
        cin >> n >> a >> b >> k;
        vector<int> h(n);
        for(int i=0; i<n; i++) cin >> h[i];
        vector<int>kreq;
        int points=0;
        for(int i=0; i<n; i++) {
            int hi;
            if(h[i] % (a+b) == 0) {
                hi = b;
            } else {
                hi = h[i]%(a+b) - a;
            }
            // cout << "hi at i : " << i << " is : " << hi << endl;
            if(hi <= 0) {
                points++;
            } else {
                int kr = 0;
                if(hi % a != 0) {
                    kr += 1;
                }
                kr += hi/a;
                kreq.push_back(kr);
                // cout << "k required at i : " << i << " is : " << kr << endl;
            }
        }
        sort(kreq.begin(), kreq.end());
        int kused = 0;
        for(int i=0; i < kreq.size(); i++) {
            kused += kreq[i];
            if(kused <= k) {
                points++;
            } else {
                break;
            }
        }
        cout << points << endl;
    }
    return 0;
}


