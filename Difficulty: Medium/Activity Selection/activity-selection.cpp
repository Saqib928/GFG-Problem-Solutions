//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  static bool cmp(pair<int,int> &a,pair<int,int> &b){
      if(a.second<b.second){
          return true;
      }
      return false;
  }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
       int n=start.size();
       vector<pair<int,int>> act;
       for(int i=0;i<n;i++){
           act.push_back({start[i],finish[i]});
       }
       sort(act.begin(),act.end(),cmp);
       int count =1;
       int last_end=act[0].second;
       for(int i=1;i<act.size();i++){
           if(act[i].first>last_end){
               count++;
               last_end=act[i].second;
           }
       }
       return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends