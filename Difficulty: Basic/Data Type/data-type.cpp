//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if (str == "Character") {
            return sizeof(char);  // In C++, char is 1 byte.
        } 
        else if (str == "Integer") {
            return sizeof(int);   // In C++, int is 4 bytes.
        } 
        else if (str == "Long") {
            return sizeof(long);  // In C++, long is typically 8 bytes.
        } 
        else if (str == "Float") {
            return sizeof(float); // In C++, float is 4 bytes.
        } 
        else if (str == "Double") {
            return sizeof(double); // In C++, double is 8 bytes.
        } 
        else {
            return -1;  // Invalid input
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends