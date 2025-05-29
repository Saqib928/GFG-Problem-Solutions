// User function Template for C++

class Solution {
  public:
  bool ispal(string &str,int i,int j) {
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
  int fxn(string &s,int i,int j,vector<vector<int>>&dp){
      if(i==j) return 0;
      if(ispal(s,i,j)) return 0;
      if(dp[i][j]!=-1) return dp[i][j];
      int res=1e9;
      for(int k=i;k<j;k++){
          if(ispal(s,i,k)){
          res=min(res,1+fxn(s,i,k,dp)+fxn(s,k+1,j,dp));}
      }
      return dp[i][j]=res;
  }
    int palPartition(string &s) {
        // code here
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return fxn(s,0,n-1,dp);
    }
};