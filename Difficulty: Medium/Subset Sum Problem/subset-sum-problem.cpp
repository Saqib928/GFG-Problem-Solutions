//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool fxn(int n,int sum,vector<int>& arr,vector<vector<int>>&dp){
     if(sum==0) return 1;
     if(n==0) return 0;
     if(dp[n][sum]!=-1) return dp[n][sum];
     bool inc = 0;
     if(sum>=arr[n-1]) inc = fxn(n-1,sum-arr[n-1],arr,dp);
     bool exc=fxn(n-1,sum,arr,dp);
     return dp[n][sum]= inc || exc;
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return fxn(n,sum,arr,dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends