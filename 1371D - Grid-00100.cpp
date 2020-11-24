#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define read(x) scanf("%d", &x)
#define mod 1000007

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(k%n == 0) cout << 0 << endl;
        else cout << 2 << endl;
        bool mat[n][n];
        memset(mat, 0, sizeof(mat));
        int row=0, col=0;
        while(k) {
            k--;
            mat[row][col] = 1;
            // printf("at (%d, %d)\n", row, col);
            row++; col++; col%=n;
            if(row == n) {
                row = 0; 
                col++; col%=n;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << mat[i][j] ;
            }
            cout << endl;
        }
        // cout << endl;
    }
    return 0;
}


