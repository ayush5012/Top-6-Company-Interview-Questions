//Question link: https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/

//--------------------------------------------------CODE----------------------------------
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int w = max(L1[0], L2[0]);
        int x = min(L1[1], L2[1]);
        int y = min(R1[0], R2[0]);
        int z = max(R1[1], R2[1]);
        
        return w<=y && x>=z;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends