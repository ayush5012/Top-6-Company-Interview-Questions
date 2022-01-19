// Question link: https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

//--------------------------------------------------CODE----------------------------------
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decode(int &i, string s){
        string ans;
        for(; i<s.length(); i++){
            if(s[i] == ']')
               return ans;
            if(s[i] >= '0' && s[i] <= '9'){
                int a = 0;
                while(s[i] >= '0' && s[i] <= '9'){
                    a *= 10;
                    a += (s[i] - '0');
                    ++i;
                }
                i += 1;
                string t = decode(i, s);
                while(a--)
                ans += t;
            }
            else ans += s[i];
        }
        return ans;
    }

    string decodedString(string s){
        string ans;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ']')
               return ans;
            if(s[i] >= '0' && s[i] <= '9'){
                int a = 0;
                while(s[i] >= '0' && s[i] <= '9'){
                    a *= 10;
                    a += (s[i] - '0');
                    ++i;
                }
                i += 1;
                string t = decode(i, s);
                while(a--)
                ans += t;
            }
            else ans += s[i];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends