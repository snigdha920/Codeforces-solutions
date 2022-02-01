#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 0) {
        return false;
    } 
    return ceil(log2(n)) == floor(log2(n));
}

void solve(int n) {
    int a[n];
    bool setMaxPower = false;
    for(int i=n-1; i>0; i--) {
        a[i] = i;
        if(isPowerOfTwo(i) && !setMaxPower) {
            a[i-1] = 0;
            a[0] = i-1;
            i--;
            setMaxPower = true;
        }
    }
    
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    
    cout << endl;
    
}

/* 

In general, when we place 2 integers next to each other
- if they have the same number of bits in their binary form, their XOR is the
difference between the numbers. 
- if they have different number of bits, say x and y (where x > y), 
their XOR is going to be atleast 2^(x-1). 

So if we sort all the numbers in ascending order we increase the chances of 
the adjacent numbers having the same number of bits, and the difference between them will be 
1, which is great for minimising our cost. 

The problem arises for all elements at index 2^x. For all these elements, the XOR with 
the number before them gives 2^(x+1) - 1. Which is quite high. 

- A possible solution is to swap 0 and the element at 2^x - 1, this way the cost becomes 2^x.

On closer inspection it is noted that the cost cannot be less than 2^x, where x is the 
greatest integer value where 2^x < n. It will have x+1 bits. 

This is because there will be a change in the number of bits from x to x+1 in any permutation.
Since there is a change between bits, we will calculate an XOR between values having x+1 bits
and y bits (where y < x+1) because the value before values having x+1 bits will have y bits. 
The result of this XOR will never be less than 2^x. 

Hence 2^x is the minimum cost. 

*/


int main() {
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        solve(n);
    }

    return 0;
}

