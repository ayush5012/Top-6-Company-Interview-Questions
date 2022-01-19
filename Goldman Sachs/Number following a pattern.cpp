// Question link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

//--------------------------------------------------CODE----------------------------------
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        int i = 1;
        string ans = "1";
        for(int j = 0; j<s.length();){
            if(s[j] == 'D'){
                string temp;
                char a = ans.back();
                ans.pop_back();
                temp += a;
                while(s[j] == 'D' && j < s.length()){
                    temp += to_string(++i);
                    ++j;
                }
                reverse(temp.begin(), temp.end());
                ans += temp;
            }
            else {
                ans += to_string(++i);
                ++j;
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends