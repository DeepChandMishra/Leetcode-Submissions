class Solution {
public:
    int maxVowels(string s, int k) {
        int j=0;
        int count=0;
        int ans=0;
        int i=0;
        while(i<s.size()){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
            
            if(i-j == k){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    count--;
                }
                j++;
            }
            ans=max(ans,count);
            i++;
        }
        return ans;
    }
};