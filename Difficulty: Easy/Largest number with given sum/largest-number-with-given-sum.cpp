// Function to return Largest Number

class Solution {
  public:
    // Function to return the largest possible number of n digits
    // with sum equal to given sum.
    string largestNumber(int n, int sum) {
        // Your code here
        string ans="";
        if(sum>(9*n)) return "-1";
        for(int i=0;i<n;i++){
            if(sum>=9){
                ans+="9";
                sum-=9;
            }else{
                ans+=to_string(sum);
                sum=0;
            }
        }
        return ans;
    }
};