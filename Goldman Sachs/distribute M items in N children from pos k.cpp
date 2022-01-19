// Question link: https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/

//--------------------------------------------------CODE----------------------------------

// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findPosition(int N , int M , int K) {
        while(M != 1){
            M -= 1;
            K++;
            if(K>N)
            K = 1;
            // cout<<K<<endl;
        }
            
        return K;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends