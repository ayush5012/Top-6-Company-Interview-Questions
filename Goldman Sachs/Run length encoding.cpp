//Question link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

//--------------------------------------------------CODE----------------------------------

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{
    string ans;
    char c = src[0];
    int v = 0;
    for(auto &x: src){
        if(x != c){
            ans += c;
            ans += to_string(v);
            c = x, v = 1;
        }
        else v++;
    }
    ans += c;
    ans += to_string(v);
    return ans;
}     
 
