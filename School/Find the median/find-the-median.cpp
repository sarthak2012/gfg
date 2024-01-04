//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here
		    //basic maths to find the medien approach
		    int med;
		    sort(v.begin(),v.end());
		    int n=v.size();
		    // when even no of integer in vector
		    if(n%2==0)
		    {   int j;
		        j=v[(n/2-1)]+v[n/2];
		        med=j/2;
		        return med;
		    }
		    // when odd no of integer in vector
		    else
		    {   int j;
		        med=v[n/2];
		        return med;
		    }
		    
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends