//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  const int MOD = 1000000007;
int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

long long powerMod(long long base, long long exp, int mod) {
    if (exp == 0) return 1;

    long long halfPower = powerMod(base, exp / 2, mod);
    long long result = (halfPower * halfPower) % mod;

    if (exp % 2 != 0) result = (result * base) % mod; 
    return result;
}

int reverseExponentiation(int n) {
    int r = reverseNumber(n);
    return powerMod(n, r, MOD);
}

};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T; // test cases

    while (T--) {
        int n;
        cin >> n; // input N

        Solution ob;
        // power of the number to its reverse
        int ans = ob.reverseExponentiation(n);
        cout << ans << endl;
    }

    return 0;
}

// } Driver Code Ends