//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    long long sumOfDivisors(int N) {
        long long num = 0;

        // Iterate through all numbers from 1 to N
        for (int i = 1; i <= N; i++) {
            // For each i, it will contribute to all its multiples
            // So add i to the result (N/i) times
            num += i * (N / i);
        }

        return num;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends