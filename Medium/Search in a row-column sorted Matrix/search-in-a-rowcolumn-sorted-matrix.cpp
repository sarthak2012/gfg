//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
         /*
         it is sorted row wise and col wise only ..find if x present or not
         
         approach 1-> (worst) O(N * M)
         traverse all the element one by one
         
         approach 2->(better) O(N + M)
         chexch it row wise only for the element
         
         approach 3->(best) O(NlogN+ logM)
         start from last element of the first row 
         move down for greater element
         and move left for smaller elements
         */
         
         // approach 3
         
         int i=0,j=m-1,mid;
         while(i<n&&j>=0)
         {
            if (matrix[i][j]==x)
            return 1;
            
            else if (matrix[i][j]<x) // when value is  small
            i++;
            else // when vaule is larger
            j--;
         }
        return 0;  
    }
};

//{ Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 


// } Driver Code Ends