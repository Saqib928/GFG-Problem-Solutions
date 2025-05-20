//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int fxn(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
      if(i==j) return 0;
      if(dp[i][j]!=-1) return dp[i][j];
      int mini=1e9;
      for(int k=i;k<j;k++){
          mini=min(mini,fxn(i,k,arr,dp)+fxn(k+1,j,arr,dp)+arr[i-1]*arr[k]*arr[j]);
      }
      return dp[i][j]=mini;
  }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return fxn(1,n-1,arr,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}

// } Driver Code Endshttps://media.geeksforgeeks.org/img-practice/chatIcon-1653561581.svg