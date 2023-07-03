//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int winsize = 0;
        for(int i = 0; i < n; i++){
            int start = i;
            int end = n - 1;
            while(end >= i && arr[i] > arr[end]){
                end--;
            }
            winsize = max(winsize, end - start);
            if(i > winsize)
                break;
        }
        return winsize;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends