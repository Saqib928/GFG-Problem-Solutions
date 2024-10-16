//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  vector<long long> num;
    long long fact = 1;
    int i = 1;  // Start with 1 for factorial

    vector<long long> factorialNumbers(long long n) {
        // Base case: stop if the factorial exceeds n
        if (fact > n) {
            return num;
        }

        // Add the current factorial to the list
        num.push_back(fact);

        // Update the factorial for the next iteration (i! = i * (i-1)!)
        i++;
        fact *= i;

        // Recursive call to process the next factorial
        return factorialNumbers(n);}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends