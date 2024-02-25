//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    vector<int>lps(s.size(),0);
	    int preffix=0,suffix=1;
	    
	    while(suffix<s.size())
	    {
	        //matching string
	        if(s[preffix]== s[suffix])
	        {
	            lps[suffix]=preffix+1;
	            suffix++,preffix++;
	        }
	        else
	        {
	           // un-matching string
	            if(preffix==0)
	            {
	                
	                lps[suffix]=0;
	                suffix++;
	            }
	            
	            else
	                {
	                    preffix = lps[preffix-1];
	                } 
	       }
	    }
	    return lps[s.size()-1];
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends