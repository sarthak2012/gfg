//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        
        /*              logic
        
            count the no of 5 and 2 appearing
            and no of 5 appearing is always less than no of 2 appearing
            so, we have to count the no of times 5 appearing only
            no of 5 = ( n! / 5 ) until questiont is less than 5
            
            ex 
            100!  = 100/5 ==20  (20>5) true---> continue
             20=    20/5  ==4   (4>5) false-->stop
             
             ans== 20+4=24(there will be 24 trailling zeros)
        */
        int count=0;
        while(N>=5)
        {
            count=count+N/5;
            N=N/5;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends