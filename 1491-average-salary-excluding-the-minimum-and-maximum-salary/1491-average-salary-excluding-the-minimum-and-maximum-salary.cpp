class Solution {
public:
    double average(vector<int>& s) {
        double ans =0;
        int mn = INT_MAX , mx=0;
        for(int i =0;i<s.size();i++){
            mn = min(mn , s[i]);
            mx = max(mx,s[i]);
            ans +=s[i];
        }
        ans = ans - mn - mx;
        ans = ans/(s.size()-2);
        return ans;
    }
};