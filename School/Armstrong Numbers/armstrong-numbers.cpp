//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        
        // code here
        //  sum of the cubes of its digits is equal to the number itself.
        int sum = 0;
        int N = n; 
        
        while(n>0){
            int lastdigit=n%10; // tofind the last digit
            sum = sum + (lastdigit*lastdigit*lastdigit);  // make cube of the last figit and add itto the sum
            n = n/10;    // find the next digit 
        }
        
        if(N == sum){
            return "Yes";
        }
        else{
            return "No";
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
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends