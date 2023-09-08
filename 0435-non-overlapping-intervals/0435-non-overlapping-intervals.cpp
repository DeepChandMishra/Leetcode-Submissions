 bool comp(vector<int> a, vector<int> b)
{
    if(a[1] == b[1]) return a[0]<b[0];
    return a[1]<b[1];
}

class Solution {
    
public:
   

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp); 
        int n = intervals.size();
        int ans = 0;
        vector<int> p = intervals[0];
        
        for(int i=1;i<n;i++)
        {
            if(p[1] > intervals[i][0])
                ans++;
            else
                p = intervals[i];
        }
        return ans;
    }
};