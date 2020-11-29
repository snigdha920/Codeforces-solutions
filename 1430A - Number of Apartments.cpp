#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n%3 == 0) printf("%d 0 0\n", n/3);
        else if(n%5 == 0) printf("0 %d 0\n", n/5);
        else if(n%7 == 0) printf("0 0 %d\n", n/7);
        else {
            int n7 = n; bool flag=0;
            for(int i=1; n7>0; i++) {
                n7 -= 7;
                if(n7 < 0) break;
                if(n7%3 == 0) {
                    printf("%d 0 %d\n", n7/3, i);
                    flag=1;
                    break;
                } else if(n7%5 == 0) {
                    printf("0 %d %d\n", n7/5, i);
                    flag=1;
                    break;
                }
            }
            if(flag==1) continue;
            int n5 = n;
            for(int i=1; n5>0; i++) {
                n5 -= 5;
                if(n5 < 0) break;
                if(n5%3 == 0) {
                    printf("%d %d 0\n", n5/3, i);
                    flag=1;
                    break;
                } else if(n5%7 == 0) {
                    printf("0 %d %d\n", i, n5/7);
                    flag=1;
                    break;
                }
            }
            if(flag==1) continue;
            int n3 = n;
            for(int i=1; n3>0; i++) {
                n3 -= 3;
                if(n3 < 0) break;
                if(n3%5 == 0) {
                    printf("%d %d 0\n", i, n3/5);
                    flag=1;
                    break;
                } else if(n3%7 == 0) {
                    printf("%d 0 %d\n", i, n3/7);
                    flag=1;
                    break;
                }
            }
            if(flag==1) continue;
            else printf("-1\n");
        }
    }
    return 0;
}
