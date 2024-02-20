//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        /*
        appeoach =>take a vector and initialy store 1 to it
        now start multiplying it from n to 1 and sstore the value in reverse order in vector 
        at last print the reverse order as your answer
        
        */
        
        vector<int> ans(1,1);
        
        while(N>1)
        {
              int carry=0 , res, size =ans.size();
              for(int i=0;i<size;i++)
              {
                  res=ans[i]*N+carry;
                  ans [i]= res%10;
                  carry = res/10;
              }
              while(carry)
              {
                  ans.push_back(carry%10);
                  carry/=10;
              }
              N--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends