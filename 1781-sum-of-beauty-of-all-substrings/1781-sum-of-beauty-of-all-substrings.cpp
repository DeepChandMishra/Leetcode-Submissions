class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int count[26]={};
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                int ind=s[j]-'a';
                count[ind]++;
                maxi=max(maxi,count[ind]);
                mini=count[ind];
                for(int k=0;k<26;k++){
                    if(count[k] >=1){
                        mini=min(mini,count[k]);
                    }
                }
                ans += (maxi-mini);
            }
        }
        return ans;
    }
};