//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {  
    
    /*
    
        question->
        
        there are (n) wall with different length which need to be painted by (k) painters
        
         here 1 length is == 1 unut , in continous mannar
        
        find minimum time of painting all walls
        
        here (n) walls are to be distributed between (k) patterns in continous way
        
        
        
        approach ->
        
        take max here first  to start with (that is the min time)
        start = max of all
        end = sum of all values in array(when k = 1)
         find mid
         if done -->  save the value and move left 
         if not done --> move right
         stop when start is greater than end
        
    */
        
        // code here
        

        long long start=0, end=0, mid , ans;
        for(int i=0;i<n;i++)
        {
            if(start<arr[i])
            start=arr[i];
            end=end+arr[i];
        }
        while(start<=end)
        {
            mid=start+(end-start)/2;
            long long Count=1;
            long long pages=0 ; 
            for(int i=0;i<n;i++)
            {
                pages=pages+arr[i];
                
                if(pages>mid)
                {
                    Count++; 
                    pages=arr[i];
                }
            }
            
            if (Count<=k)
            {
                
                ans=mid; 
                end=mid-1; 
            }
                else
                start=mid+1;
        }
            return ans;  
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends