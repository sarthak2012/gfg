//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    
    //approach-> put last value in temp then start from last
    //and put second last value to last ans so on and 
    //finaly out temp in the fist array
    int last = arr[n-1];
    //start from 2nd last to first 
    for(int  i=n-2;i>=0;i--)
    arr[i+1] = arr[i];  
    
    
    arr[0]=last;
    
    
    
}