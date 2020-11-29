#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        string str=s;
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        int op=0, prefix[n];
        prefix[n-1]=1;
        for(int i=n-2; i>=0; i--) {
            if(s[i] == s[i+1]) {
                prefix[i] = prefix[i+1] + 1;
            } else {
                prefix[i] = 1;
            }
        }
        int start=0, i=0, del[n];
        memset(del, 0, sizeof(del));
        while(i<n) {
            if(prefix[i]>=2) {
                start+=prefix[start];
                del[i] = 1;
                op++;
            }
            if(start > i) i=start;
            else i++;
        }
        // cout << op << endl;
        int count=0;
        for(int i=start; i<n; i++) if(del[i] == 0) count++;
        op += (count+1)/2;
        cout << op << endl;
    }
}
