//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
    /* 
    approach=>
    create an array of size 26 and initialy all values as 0
    and keep count of all the character
    and then print the alphabets based on its count
    */
    
    
    /*
    this code will exceed time limit here 
    
    vector<int> alpha(26,0);  // creating a vector  named alpha with size 26 and initialed value as 0
        for(int i=0;i<s.size();i++)  // iterate all the indexes
        {
            alpha[s[i]-'a']++; 
        } ;
        
        string ans;
        
        for(int i=0;i<26;i++)
        {
            char ch = 'a'+i;
            
            while(alpha[i])
            {
                ans= ans+ch;
                alpha[i]--;
            }
        }
        
        return ans;
        
        */
        
    int count[26]={0};
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    s="\0";
    
    for(int i=0;i<26;i++){
        if(count[i]>0){
            while(count[i]!=0){
                s+=(char)(i+'a');
                count[i]--;
            }
        }
    }
    return s;
}