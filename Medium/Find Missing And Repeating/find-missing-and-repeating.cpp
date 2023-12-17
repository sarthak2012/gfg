//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        
        /*
        it is not sorted  so 
        first sort the values in ascending order
        for a given integer from N
        values stored will be 1,2,3,4....N
        ex->
        for N = 6
        value = 1,2,3,4,5,6
        but given array is = 1,2,2,3,4,5
        now repeating =2 , misssing = 6
        ptint this repeating =2 , misssing = 6 as output
        */
        // code
        
        // decrease value by 1
        for(int i=0;i<n;i++)
        arr[i]--;
        
        //occurance
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
            
        }
        
        vector<int>ans(2);
        
        for(int i=0;i<n;i++)
        {
            //repeating no 
            if(arr[i]/n==2)
            ans[0]=i+1;
            
            // missing no
            else if(arr[i]/n==0)
            ans[1]=i+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends