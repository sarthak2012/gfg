//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    
	    /*
	    case1 = all +ve == take all 
	    case2 = even -ve == take all (becomes positive)
	    case3 = odd -ve== take max of(multiple of suffix of it or multiple of preffix of it   ) 
	    case4 = if it has zero in it(whenever 0 asmultiple turn it to one)
	    */
	    // code here
	    
	    long long preffix=1, suffix = 1;
	    long long ans = INT_MIN;
	    for(long long i=0;i<n;i++)
	    {
	        if(preffix==0) preffix=1;
	        if(suffix==0) suffix=1;
	        preffix = preffix * arr[i];     //iterate from begining
	        suffix = suffix * arr[n-i-1];  //iterate from end
	        ans = max(ans, max(preffix,suffix));
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends