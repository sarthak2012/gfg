//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {
        long long start=1,end = N,mid,ans;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(mid*mid*mid ==  N)
            {
                ans =  mid;
                return ans;
            }
            else if(mid*mid*mid < N)
            {
                ans=  mid;
                start = mid +1;
            }
            else
            {
                end = mid -1;
            }    
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends