#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void pattern18(int n){
            for(int i=n-1; i>=0; i--){
                for(char ch='A'+i; ch<='A'+n -1; ch++ ){
                    cout << ch<< " ";

                }
                cout << endl;
           
            }
            
            

        }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern18(n);
    return 0;
}