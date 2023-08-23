//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	 vector<int> dx={0, 0, -1, 1,1, 1, -1,-1};
  vector<int> dy={1,-1  ,0, 0,1,-1,1,-1};
bool isPresent(int x,int y,int index,vector<vector<char> > &matrix,string word){
    int n=matrix.size();
    int m=matrix[0].size();
  
    for(int k=0;k<8;k++){
        index=1;
        int i=x;
        int j=y;
        while(i+dx[k]>=0 && i+dx[k]<n && j+dy[k]>=0 && 
        j+dy[k]<m && index<word.length()&& matrix[i+dx[k]][j+dy[k]]==word[index]){
            
          index++;
          i+=dx[k];
          j+=dy[k];
        }
        if(index==word.length()){
          return true;
        }
        
    }
    return false;
    
}
    vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==word[0]){
                    if(isPresent(i,j,1,grid,word)){
                        ans.push_back({i,j});
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