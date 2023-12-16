//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        /*
        question->
        
        differengt books with doff no of pages are pesent that are to be distfributed
        between M students such that 
        1 every student get ATLEAST 1 book
        2 book allocation in contigous way only
        3 out of all permutation --> student with most number of  books get min  number of pages and all books to be distributed amoung M people
        
        approach-> start with max of array[i] , then increase value with all until first valid answer(not optimal solution)
        approach-> start with max of array[i] , then find mid if answer not founnd jump right else ==> save the potential ans and jump left for minimum value 
        where
        end point will be sum of the pages in worsg case when M=1
        
        
        pshedu code 
        start= max elemnt ;end - tot sum  of element ;mid ;ans
        while start<=end
        mid=start+end/2
        after finding end start distribution
        start a counter for the no of books to student and a ineteger that store the no of pages recieved until smaller tham mid  
        page >mid-->count ++ for next student . store the page 
        all of this be <=M
        */ 
        
        //code here
        if (M>N)
        return -1; // invalid case 
        int start=0, end=0, mid , ans;
        for(int i=0;i<N;i++)
        {
            start=max(start,A[i]);
            end=end+A[i];
        }
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int student_Count=1;
            int pages=0 ; //page allocation and student count
            for(int i=0;i<N;i++)
            {
                pages=pages+A[i];//givivng page to student
                
                if(pages>mid)
                {
                    student_Count++; //next student
                    pages=A[i];
                }
            }
            
            if (student_Count<=M)
            {
                
                ans=mid; //tore ans
                end=mid-1; //move left
            }
                else
                start=mid+1;
        }
            return ans;   
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends