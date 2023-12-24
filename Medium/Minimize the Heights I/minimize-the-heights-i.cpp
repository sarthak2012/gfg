//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr ,arr+n );
        
        int ans = arr[n-1] - arr[0]; //initialising and storing the ans just after sorting
        int smallestTower =arr[0]+k;
        int largestTower =arr[n-1]-k;
        int minimum,maximum;
        for(int i=0;i<n-1;i++)
        {
            minimum = min(smallestTower,arr[i+1]-k);
            maximum = max(largestTower,arr[i]+k);
            ans= min(ans,maximum-minimum);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends