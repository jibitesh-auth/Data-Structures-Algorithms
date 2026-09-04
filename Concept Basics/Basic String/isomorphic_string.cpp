#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isomorphicString(string s, string t){
            map<char,char> mpp;
            for(int i=0; i<s.length(); i++){
                mpp[s[i]] = t[i];
            }

            for(auto it: mpp){
                char key = it.first;
                char value = it.second;

                

            }
        }

};


int main(){
    return 0;

}