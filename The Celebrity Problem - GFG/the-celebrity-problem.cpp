//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    bool isCelebrity(const vector<vector<int>>& party, int p) {
    int n = party.size();
    
    // Check if person 'p' knows anyone
    for (int i = 0; i < n; i++) {
        if (party[p][i] == 1) {
            return false;
        }
    }
    
    // Check if everyone else knows person 'p'
    for (int i = 0; i < n; i++) {
        if (i != p && party[i][p] != 1) {
            return false;
        }
    }
    
    return true;
}


    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        for (int i = 0; i < n; i++) {
        if (isCelebrity(M, i)) {
            return i;
        }
    }
    
    return -1; // No celebrity found
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends