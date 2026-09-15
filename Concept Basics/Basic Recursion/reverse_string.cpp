#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<char> reverseString(vector<char>& s){
            reverse(s,0,s.size()-1);
            return s;
            
        }

    private:
        void reverse(vector<char>& s, int i, int j){
            if(i >= j){
                return;
            }
            swap(s[i],s[j]);
            reverse(s,i+1,j-1);
        }
};

int main(){
    vector<char> vec;
    char c;
    while(cin >> c){
        vec.push_back(c);
    }
    Solution sol;
    vector<char> v = sol.reverseString(vec);

    for(auto it: v){
        cout << it << " ";
    }


    return 0;
}