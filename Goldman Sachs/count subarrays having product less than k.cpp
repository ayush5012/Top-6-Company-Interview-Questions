//Question link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#

//--------------------------------------------------CODE----------------------------------

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        pair<long long, long long> p;
        p = {a[0],1};
        int i=0, j=1;
        int ans = 0;
        while(i<n && j<n){
            if(p.first < k)
                ans += p.second;
            p.first *= a[j++];
            p.second += 1;
            while(p.first > k){
                p.first /= a[i++];
                p.second -= 1;
                // cout<<p.second<<endl;
            }
        }
        
        if(p.first < k)
                ans += p.second;
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends