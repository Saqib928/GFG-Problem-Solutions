//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  void solve(vector<int>& arr,vector<int>&ans,int key,int n){
      if(n<0) return;
      if(arr[n]==key&&ans[1]==-1){
          ans[1]=n;
      }
      if(arr[n]==key){
          ans[0]=n;
      }
      solve(arr,ans,key,n-1);
  }
    vector<int> findIndex(vector<int>& arr, int key) {
        // code here.
        vector<int>ans(2,-1);
        solve(arr,ans,key,arr.size()-1);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> res;
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int key;
        cin >> key;
        cin.ignore();
        Solution ob;
        res = ob.findIndex(arr, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends