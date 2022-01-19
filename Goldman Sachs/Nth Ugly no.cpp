// Question link: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#

//--------------------------------------------------CODE----------------------------------

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    vector<long long> v;
	    v.push_back(1);
	    int i2 = 0, i3 = 0, i5 = 0;
	    for(int i=1; i<n ; i++){
	        long long a = min({v[i2]*2, v[i3]*3, v[i5]*5});
	        if(a == v[i2]*2)
	        ++i2;
	        if(a == v[i3]*3)
	        ++i3;
	        if(a == v[i5]*5)
	        ++i5;
	        v.push_back(a);
	    }
	    return v.back();
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends