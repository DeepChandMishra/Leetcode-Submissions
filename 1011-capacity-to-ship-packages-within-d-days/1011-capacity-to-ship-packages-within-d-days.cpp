class Solution {
    bool isPossible(vector<int>& weights, int days,int mid){
        int day=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
            if(sum > mid){
                day++;
                sum = weights[i];
            }
            if(day>days){
                return false;
            }
        }
        return true;
    }
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
        }
        int high=sum;
        int ans=-1;
        while(low <= high){
            int mid=low +(high-low)/2;
            if(isPossible(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};