//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  int kadane(vector<int> &res,int n){
      int mx=INT_MIN,s=0;
      for(int i=0;i<n;i++){
          s+=res[i];
          mx=max(mx,s);
          if(s<0) s=0;
      }
      return mx;
  }
    int maximumSumRectangle(vector<vector<int>> &mat) {
        // code here
        int r=mat.size(),c=mat[0].size();
        int mx=INT_MIN;
        for(int i=0;i<r;i++){
            vector<int> res(c);
            for(int j=i;j<r;j++){
                for(int k=0;k<c;k++){
                    res[k]=res[k]+mat[j][k];
                }
                mx=max(mx,kadane(res,c));
            }
            
        }
        return mx;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(v) << "\n";
    }
}
// } Driver Code Ends