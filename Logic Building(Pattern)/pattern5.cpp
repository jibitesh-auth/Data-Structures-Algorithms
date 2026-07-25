#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static void pattern5(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<n-i; j++){
                    cout << "*";
                }
                cout << endl;
            }
            

        }

};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern5(n);
    return 0;
}