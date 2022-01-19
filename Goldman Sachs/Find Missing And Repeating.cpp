// Question link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

//--------------------------------------------------CODE----------------------------------
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *a = new int[2];
        a[0] = 0, a[1] = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        for(int i=1;i<=n;i++){
            if(!mp.count(i))
                a[1] = i;
            else if(mp[i] == 2)
                a[0] = i;
        }
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends