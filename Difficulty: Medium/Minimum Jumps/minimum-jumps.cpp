//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
  int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0;  // Already at the end
        if (arr[0] == 0) return -1;  // Can't move anywhere

        int maxReach = arr[0];  // Maximum index we can reach
        int steps = arr[0];     // Steps we can still take in the current jump
        int jumps = 1;          // Number of jumps needed

        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps;  // If we've reached the last index

            maxReach = max(maxReach, i + arr[i]);  // Update the farthest reach
            steps--;  // Use a step to move forward

            if (steps == 0) {  // If no more steps left in this jump
                jumps++;  // We need to jump again
                if (i >= maxReach) return -1;  // If we can't move further, return -1
                steps = maxReach - i;  // Re-initialize steps for the new jump
            }
        }

        return -1;  // In case we never reach the end
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends