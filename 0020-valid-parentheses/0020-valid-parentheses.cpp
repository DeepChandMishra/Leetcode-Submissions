class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(ch=='(' || ch == '{' || ch == '['){
                st.push(ch);
            }else{
                if(st.empty()) return false;
                char temp=st.top();
                st.pop();
                if((temp == '(' && ch != ')') || (temp == '{' && ch != '}') || (temp != '[' && ch == ']')){
                    return false;
                }
            }  
        }
        return st.empty();
    }
};