class Solution {
public:
    int compress(vector<char>& chars) {
        int ans=0;
        int i=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n and chars[j] == chars[i]){
                j++;
            }
            chars[ans++]=chars[i];
            int count = j-i;
            if(count > 1){
                string ch=to_string(count);
                for(auto i : ch){
                   chars[ans++]=i;
                }
            }
            i=j;
        }
        return ans;
    }
};