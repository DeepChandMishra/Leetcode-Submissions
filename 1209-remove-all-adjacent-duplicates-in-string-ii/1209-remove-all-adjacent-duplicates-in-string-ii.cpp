class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        stack<pair<char,int>>st;
        for(int i=0;i<n;i++){
            if(st.empty() or st.top().first != s[i]){
                st.push({s[i],1});
            }else{
                auto pre=st.top();
                st.pop();
                st.push({s[i],pre.second + 1});
            }
            if(st.top().second == k) st.pop();
        }
        string ans="";
        while(!st.empty()){
            auto curr=st.top();
            st.pop();
            while(curr.second--){
                ans.push_back(curr.first);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};