//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

vector<long long> lcmAndGcd(long long A , long long B) {
    long long C = A;
    long long D = B;
    
    // Calculate GCD using Euclid's algorithm
    while (D != 0) {
        long long temp = D;
        D = C % D;
        C = temp;
    }
    
    long long gcdVal = C;  // Calculate GCD
    long long lcmVal = (A * B) / gcdVal;  // Calculate LCM using the relation
    
    return {lcmVal, gcdVal};  // Return both LCM and GCD
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends