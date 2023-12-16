//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        
        
        /*     
            approach ->
            take two pointer start and end 
            while (start<=end)
            if start==0
            start++
            else 
           if end ==0
            swap
             start ++ end--
            if end ==0
            swap start and end
                start ++ end--
                else end--
        */
            // code here
 
        int start=0, end=n-1;
        while(start<end)
        {
            if(arr[start]==0)
            start++;
            else
            {
                if (arr[end]==0)
                {
                    swap(arr[start],arr[end]);
                    start++;
                    end--; 
                }
                else
                end--;
            }
        }
    
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
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends