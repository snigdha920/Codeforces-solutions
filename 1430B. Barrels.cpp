#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<ll>a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        if(k == 0) {
            cout << a[n-1]-a[0] << endl;
            continue;
        }
        ll maxb=a[n-1]; 
        for(int i=n-2; i>=0 && k>0; i--) {
            maxb+=a[i];
            k--;
        }
        cout << maxb << endl;
    }
    return 0;
}
