#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static void pattern6(int n){
            for(int i =1; i<=n; i++){
                for(int j=1; j<=n-i+1; j++){
                    cout << j;

                }
                cout << endl;
            }
        }

};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern6(n);
    return 0;
}


//T.C: O(N^2)
//S.C: O(1)