// Question link: https://leetcode.com/problems/greatest-common-divisor-of-strings/

//--------------------------------------------------CODE----------------------------------
class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        
        string ans="";
        for(int i=1;i<=min(s1.length(), s2.length()); i++){
            if(s1.length()%i == 0 && s2.length()%i == 0){
                string temp="";
                for(int j=0;j<i;j++)
                    temp+=s2[j];
                int n = s1.length()/temp.length();
                string t;
                while(n--)
                    t+=temp;
                if(s1 != t)
                    continue;
                int m = s2.length()/temp.length();
                t="";
                while(m--)
                    t+=temp;
                if(s2 != t)
                    continue;
                ans = temp;
            }
        }
        
        return ans;
        
    }
};