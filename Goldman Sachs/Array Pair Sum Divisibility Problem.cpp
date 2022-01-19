// Question link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

//--------------------------------------------------CODE----------------------------------
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> mp;
        for(auto &x: nums)
            mp[x%k]++;
        
        for(auto &x: mp){
            if(x.first == 0 || 2*x.first == k){
                if(x.second%2)
                return false;
            }
            else if(x.second != 0){
                if(x.second > mp[k-x.first] || x.second < mp[k-x.first]){
                    // cout<<x.second<<" "<<mp[k-x.first]<<endl;
                return false;
                }
                mp[k-x.first] = 0;
                mp[x.first] = 0;
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends