// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            swap(arr[0],arr[i]);
        }
    }
};