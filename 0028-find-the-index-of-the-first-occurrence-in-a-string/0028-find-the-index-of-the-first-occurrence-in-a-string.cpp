class Solution {
public:
    int strStr(string haystack, string needle) {
        int count=0;
        int j=0;
        for(int i=0;i<haystack.size();i++){
           count=0;
           if(haystack[i]==needle[0]){
               j=i;
               
               for(char ch : needle){
                    if(haystack[j] != ch){
                        break;
                    }
                    count++;
                    j++;
                }

                if(count == needle.length()){
                    return i;
                }
            }
        }
        return -1;
    }
};