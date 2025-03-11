//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
  bool possible(vector<int> &stalls,int d, int k){
      int cnt = 1, lastp= stalls[0];
      for(int i=1;i<stalls.size();i++){
          if(stalls[i]-lastp>=d){
              cnt++;
              lastp=stalls[i];
          }
      }
      return cnt>=k;
  }
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int f=1, l = stalls[stalls.size()-1]-stalls[0],ans = 0;
        while(f<=l){
            int m = f + (l-f)/2;
            if(possible(stalls,m,k)){
                ans = m;
                f = m+1;
            }else{
                l=m-1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends