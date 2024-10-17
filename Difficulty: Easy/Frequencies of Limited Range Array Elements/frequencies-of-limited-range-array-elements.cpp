//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
     for(int i = 0; i < N; i++) {
            if (arr[i] > N) arr[i] = 0;  // Ignore elements greater than N
        }

        // Step 2: Use the array elements as indices and increase the count.
        for(int i = 0; i < N; i++) {
            if (arr[i] % (N + 1) > 0) {  // Use modulus to handle updates
                arr[arr[i] % (N + 1) - 1] += (N + 1);  // Increment frequency count
            }
        }

        // Step 3: Store the frequency of numbers from 1 to N in arr[].
        for(int i = 0; i < N; i++) {
            arr[i] = arr[i] / (N + 1);  // Final frequencies
        }
    }
};


//{ Driver Code Starts.

int main() {
    long long t;

    // testcases
    cin >> t;

    while (t--) {

        int N, P;
        // size of array
        cin >> N;

        vector<int> arr(N);

        // adding elements to the vector
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        // calling frequncycount() function
        ob.frequencyCount(arr, N, P);

        // printing array elements
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends