class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n = arr.size();
    int res = 0;

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int j = 0;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        while (j<n && dep[j]<arr[i]) {
            cnt--;
            j++;
        }
        cnt++;
        
        res = max(res, cnt);
    }
    
    return res;
    }
};
