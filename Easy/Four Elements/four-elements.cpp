//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends




//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{    //Sorted Array By Bubble Sort
    for(int i=n-2;i>0;i--){
        for(int j=0;j<=i;j++){
            if(A[j]>A[j+1])
            swap(A[j],A[j+1]);
        }
    }
    //Four Elements Sum
     for(int i=0;i<n-3;i++){
         for(int j=i+1;j<n-2;j++)
          { int  Ans=X-A[i]-A[j];
            int Start=j+1,End=n-1;
            while(Start<End){
                if(A[Start]+A[End]==Ans)
                return 1;
                else if(A[Start]+A[End]>Ans)
                End--;
                else
                Start++;
            }
        }
    }
    return 0;
  
}