//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        // can we add any 3 no to give the output as x
        
        // sort array using bubble sort
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                if(A[j]>A[j+1])
                {
                    swap(A[j],A[j+1]);
                }
            }
        }
        
        for(int i=0;i<n-2;i++) // assuming the first number
        {
            int ans = X- A[i]; // for rest of 2 number ans is equal to total sum (x)- first element a[i]
            int start=i+1,end=n-1;
            while(start<end)
            {
                if(A[start]+A[end]==ans)
                return 1;
                else if(A[start]+A[end]>ans)
                end--;
                else
                start++;
                
                
            }
        }
        return 0;
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends