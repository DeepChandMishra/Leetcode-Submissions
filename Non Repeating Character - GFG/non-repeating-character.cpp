//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int> m;
        vector<char> v;
        for(int i=0;i<S.size();i++){
            if(!m.count(S[i])){
                v.push_back(S[i]);
                m.insert({S[i],1});
            }
            else m[S[i]]++;
        }
        for(int i=0;i<v.size();i++) if(m[v[i]]==1) return v[i];
        return '$';
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends