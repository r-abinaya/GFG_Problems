//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string crossPattern(string S){
        // code here 
        int len = S.size(); 
        string ans="";
        for (int i = 0; i < len; i++) 
        { 
            int j = len -1 - i; 
            for (int k = 0; k < len; k++) 
            { 
                if (k == i || k == j) 
                    ans+=S[k]; 
                else
                    ans+=" "; 
            } 
        } 
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.crossPattern(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends