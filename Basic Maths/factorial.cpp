#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int factorial(int n){
            if(n == 0){
                return 1;
            }
            int prod = 1;
            for(int i=1; i<=n; i++){
                prod *= i;

            }
            return prod;

        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.factorial(n);
    return 0;
}

//T.C: O(n)
//S.C: O(1)