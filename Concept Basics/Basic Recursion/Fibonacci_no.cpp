#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int fib(int n){
            if(n == 0){
                return 0;
            }
            if(n == 1) return 1;
            
            return fib(n-1) + fib(n-2);

        }
};

int main(){
    int n;
    cin >> n;
    Solution sol;
    cout << sol.fib(n);
    return 0;
}

//*T.C: O(2^N)
//*S.C: O(N)