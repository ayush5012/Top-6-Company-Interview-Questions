// Question link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

//--------------------------------------------------CODE----------------------------------
// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
       long long sum=0;
       long long i;
       for(i=1;i<=N;i++)
       {
           sum=sum+i*i;
       }
       return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  // } Driver Code Ends