#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isomorphicString(string s, string t){
            int sMap[256] = {0};
            int tMap[256] = {0};

            for(int i=0; i<s.length(); i++){
                if(sMap[s[i]] != tMap[t[i]]){
                    return false;
                }

                sMap[s[i]] = i+1;
                tMap[t[i]] = i+1;


            }

            return true;
        }
};

int main(){

    string s,t;
    cin >> s>>t;
    Solution s1;
    cout << s1.isomorphicString(s,t);
    return 0;
    
}


