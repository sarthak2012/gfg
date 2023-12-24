//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int farthest=0;
        int current=0;
        int jump=0;
        
        if(n==1)
        return 0;
    
        if(arr[0]>=n)
        return 1;
        
        for(int i=0;i<n;i++)
        {
            farthest = max(farthest,arr[i]+i);
            
            if(i==current)
            {
                
                jump++;
                current=farthest;
            }
            if(current>=n-1)
                break;            
        }
        
        if(current<n-1)
        return -1;
        return jump;
        
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends