//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

bool fun(vector<vector<char>> &grid,vector<int> &a,vector<int> &b,int i,int j,string word,int ind,int l){
        if(ind>=word.size()){
            return true;
        }
        if(i>=grid.size()||i<0||j>=grid[0].size()||j<0){
            return false;
        }
        if(grid[i][j]==word[ind]){
            return fun(grid,a,b,i+a[l],j+b[l],word,ind+1,l);
        } 
        
        return false;
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	   int n=grid.size();
        int m=grid[0].size();
        vector<int> a={-1,-1,0,1,1,1,0,-1};
        vector<int> b={0,1,1,1,0,-1,-1,-1};
        int ind=0;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==word[0]){
                    for(int l=0;l<8;l++){
                      if(fun(grid,a,b,i+a[l],j+b[l],word,ind+1,l)){
                           ans.push_back({i,j});
                           break;
                      }
                    }
                }
            }
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends