// Question link: https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/

//--------------------------------------------------CODE----------------------------------

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string s){
		    if(s[0] == '0')
            return 0;
        int n = s.length();
        if(n == 1)
            return 1;
        vector<long long> v(n+1,0);
        v[0] = 1;
        v[1] = s[0] == '0'?0:1;
        int mod = 1e9+7;
        for(int i=2;i<=n;i++){
            long long w1 = s[i-1] == '0'?0:v[i-1];
            string str = s.substr(i-2,2);
            long long w2 = str>="10" && str<="26" ?v[i-2]:0;
            v[i] = (w1 + w2)%mod;
        }
        
        return v[n]%mod;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends