class Solution {
public:
    bool isValidSerialization(string preorder) {
        if(preorder == "#") return true;
        if(preorder[0] == '#') return false;
        preorder += ',';
        int vacancy=1;
        for(int i=0;i<preorder.size();i++){
            if(preorder[i] == ',') continue;
            
            //if you find any node 
            vacancy--;
           
            if(vacancy < 0)  return false;
            if(preorder[i] != '#'){
                while(i<preorder.size() && isdigit(preorder[i]))   
                    i++;
                i--;
               vacancy += 2;
            }
        }
       return vacancy ==0;
    }
};