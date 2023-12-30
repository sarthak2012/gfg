//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    //Write your code here.
    int n = price.size();
    vector<int> profit(n);
    for(int i=0; i<n; i++)
    {
        profit[i]=0;
    }
    
    //seeling fix krke buying ko move krna h
    int max_price = price[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(price[i]>max_price)
        {
            max_price=price[i];
        }
        profit[i]=max(profit[i+1],max_price-price[i]);
    }
    
    //buying fix krke selling ko move krna h
    int min_price = price[0];
    for(int i=1; i<n; i++)
    {
        if(price[i]<min_price)
        {
            min_price=price[i];
        }
        profit[i]=max(profit[i-1],profit[i]+(price[i]-min_price));
    }
    return profit[n-1];
    
}


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends