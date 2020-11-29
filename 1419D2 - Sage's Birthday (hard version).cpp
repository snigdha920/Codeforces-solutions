#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t; t=1;
    while(t--) {
        int n; cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> ans(n); 
        int j=0;
        for(int i=1; i<n; i+=2, j++) {
            ans[i] = a[j];
        }
        for(int i=0; i<n; i+=2, j++) {
            ans[i] = a[j];
        }
        int ice=0;
        for(int i=1; i<n-1; i++) {
            if(ans[i-1] > ans[i] && ans[i+1] > ans[i]) ice++;
        }
        cout << ice << endl;
        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
