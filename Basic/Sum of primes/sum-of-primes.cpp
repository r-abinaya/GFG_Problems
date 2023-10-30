//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int primeSum(int N){
        // code here
        int sum=0;
        while(N>0)
        {
            int p=1;
            int rem=N%10;
            N=N/10;
            if(rem==1)
            {
                p=0;
            }
              for(int i=2;i<=rem/2;i++)
           {
               
               if(rem%i==0)
               {p=0;}
           }
           if(p==1)
           {
               sum=sum+rem;
           }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends