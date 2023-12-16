//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    //  approach 1-> arrange in ascending order and find 2nd element
	    // approach 2->find max value and difference them with all element the ans is the one with least difference
	    // we will use the second approach  
	    
	    
	    //code for largest element first
	    int ans=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>ans)
	        ans=arr[i];
	    }
	    
	    
	    //code for second largest element
	    int secondlargest= -1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=ans)
	        secondlargest= max(secondlargest,arr[i]);
	    }
	    
	    return secondlargest;
	}
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends