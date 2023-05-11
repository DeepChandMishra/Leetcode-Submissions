class Solution {
public:
     vector<int> nextsmallerelement(vector<int> arr,int n){
        stack<int>s;
        s.push(-1);
        
        vector<int>ans(n);
        for(int i =n-1;i>=0;i--){
            int curr=arr[i];
            while(s.top() != -1 and arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevsmallerelement(vector<int> arr,int n){
        stack<int>s;
        s.push(-1);
        
        vector<int>ans(n);
        for(int i =0;i < n;i++){
            int curr=arr[i];
            while(s.top() != -1 and arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(vector<int>& height,int n) {
        //int n=height.size();
        
        vector<int>next(n);
        next= nextsmallerelement(height,n);
        
        vector<int>prev(n);
        prev=prevsmallerelement(height,n);
        
        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=height[i];
            
            if(next[i] == -1){
                next[i]=n;
            }
            int b=next[i] - prev[i] - 1;
            
            int newarea=l*b;
            area=max(area,newarea);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& M) {
       int n=M.size();
       int m=M[0].size();
       int area=INT_MIN;
       vector<int>ans(m);
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j]!='0')
                {
                    ans[j]+=1; 
                }
                else
               ans[j]=0;
            }
         area=max(area,largestRectangleArea(ans,m));
        }
        return area;  
    }
};