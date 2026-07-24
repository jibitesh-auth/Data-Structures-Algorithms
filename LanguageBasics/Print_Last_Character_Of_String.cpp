#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        char lastChar(string& a){
            return a[a.size() - 1];


        }
};

int main(){
    string a;
    cin >> a;

    Solution s;
    cout << s.lastChar(a);
    return 0;
}