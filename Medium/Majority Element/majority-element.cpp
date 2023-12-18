//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int nums[], int n)
    {
        /*
        an element that appears more than ⌊n / 2⌋ times. n == sze of array
        majority element may or maynot exist so  verification meeded
        approach ->
        morrey voting algo
        take  2 variable element and count
        traverse the array one by one
        if(count =0)
        count++
        element == arr[i];
        else
        if(ekemnet == arr[i])
        count++
           else
           count--
           //verification needed
           count = 0;      
           for (int i=0;i<n;i++)
            {
               if (arr[i]== element)
               count++
            }   
               if(count>n/2)
               return element
               
               else 
               return -1
        */
        int element,count=0;
        for (int i=0;i<n;i++)
        {
            if (count==0)
            {
                count =1;
                element=nums[i];
            }
            else
            {
                if(element==nums[i])
                count++;
                else
                count--;
            }
        }
        // code of verification
        count = 0;
        for (int i=0;i<n;i++)
        if(nums[i]==element)
        count++;
        if(count>n/2)
        return element;
        
        else
        return -1;

    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends