class Solution {
public:
    string largestOddNumber(string num) {
      for(int j=num.length()-1;j>=0;j--){
          if(int(num[j] %2)){
              return num.substr(0,j+1);
          }
      }
        return "";
    }
};