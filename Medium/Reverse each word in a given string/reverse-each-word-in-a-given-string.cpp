//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string rev(string s)
    {
        string ans="";
        for(int i=s.length()-1;i>=0;i--)
        {
            ans+=s[i];
        }
        return ans;
    }
    string reverseWords (string s)
    {
        //code here.
        int n=s.length();
        string ans="",temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                temp+=s[i];
            }
            else{
                ans+=rev(temp);
                ans+=".";
                temp="";
            }
        }
        ans+=rev(temp);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends