//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        unordered_map<char,int> mp;
        for(auto i : pat) mp[i]++;
        int i=0, j=0,cnt=0;
        while(j<txt.size()){
            mp[txt[j]]--;
            if(j-i+1==pat.size()){
                if(check(mp,pat)) cnt++;
                mp[txt[i]]++;
                i++;
            }
            j++;
        }
        return cnt;
    }
    bool check(unordered_map<char,int>&mp,string & pat){
        for(auto i : pat){
            if(mp[i]!=0) return false;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends