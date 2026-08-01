#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void pattern1(int n){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    cout<<"*";
                }
                cout << endl;
            }

        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern1(n);
    return 0;
}


//T.C: O(n^2)
//S.C: O(1)