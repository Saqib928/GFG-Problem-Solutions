//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt = 0;
        while(n!=0){
            if((n&1)==1) cnt++;
           n= n>>1;
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends