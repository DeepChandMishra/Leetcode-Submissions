//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    unordered_map<long long,int>m;
    int fun(int n){
        if(n<=1) return n;
        long long val=(log2(n));
        long long cal=powl(2,val)-1;
       
        return m[cal]+(n-cal)+fun(n-cal-1);
     }
     
    long long countBits(long long N) {
        int cnt=1;
        long long total=0;
        while(cnt<=32){
            long long val=powl(2,cnt);
            int f=(powl(2,cnt-1));
            long long find=0;
            find=f;
            f/=2;
            f=(f*(cnt-1));
            find+=f;
            total+=(find);
            m[val-1]=total;
            cnt++;
        }
        return  fun(N);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends