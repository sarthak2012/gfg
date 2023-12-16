//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

        /*
        problem ->
        array named stall (where cows are tighed) and k = no of cows 
        assign stall to  k cow 
        min dis between any two cow is max possible
        dono ke apas ka distance max krnaa hai and the minimum distance
        
        approach->
        sort array in increasing order
        start = smallest value in array
        end = lagest value in array - smallest value in array
        find mid
        if value not found == small the distance (decrease the distance)== move to left == (end=mid-1)
        if value found ==  store the value and move to right == (start = mid +1)
        */

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
        
        // Write your code here
        int start=1,end,mid,ans ;
        //sorting vector in increasing order
        sort(stalls.begin(),stalls.end());
        
        end=stalls[n-1] - stalls[0];
        
        while (start<=end)
        {
            mid=start+(end-start)/2;
            int cowcount=1,position=stalls[0];
            for (int i=1;i<n;i++)
            {
                if(position+mid<=stalls[i])
                {
                    cowcount++;
                    position=stalls[i];
                }
            }
            
            if(cowcount<k)
            {
                end=mid-1;
            }
            else
            {
                ans = mid;
                start=mid+1;
            }
        
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends