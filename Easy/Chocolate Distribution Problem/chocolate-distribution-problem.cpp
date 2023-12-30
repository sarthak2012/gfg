//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
    //approach
    /*
    a = array name
    n = array size
    m = student
    sort the array
    Find the subarray of size m such that difference between last (maximum in case
    of sorted) and first (minimum in case of sorted) elements of subarray is minimum.
    */

    //code
    
    int start=0,end=m-1;
    
    // Sort the given packets
    sort(a.begin(), a.end());
    
    // if there are no chocolates or number of students is 0
    if (m == 0 || n == 0)
        return 0;
        
    // Number of students cannot be more than number of packets
    if (n < m)
    return -1;
    
    // Largest number of chocolates
    long long min_diff = INT_MAX;
    
    for (int i = 0; i + m - 1 < n; i++)  // traverse all
    {
        int diff = a[i + m - 1] - a[i]; // max - min = difference
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
        
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends