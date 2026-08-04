#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void pattern13(int n){
            int x =1;
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    cout << x <<" ";
                    x++;
                }
                cout << endl;


            }


            

        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern13(n);
    return 0;
}

//T.C: O(N^2)
//S.C: O(1)