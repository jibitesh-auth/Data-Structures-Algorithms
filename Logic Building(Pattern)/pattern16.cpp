#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void pattern16(int n){
            
            for(int i=0; i<n; i++){
                char ch ='A'+i;
                for(int j=0;j <=i; j++){
                    cout << ch;
                }
                
                cout << endl;
            }

        }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern16(n);
    return 0;
}


//T.C: O(N^2)
//S.C: O(1)