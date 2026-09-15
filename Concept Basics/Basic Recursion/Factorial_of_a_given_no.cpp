#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        long long int factorial(int n){
            if(n <= 1){
                return 1;
            }
            return n * factorial(n-1);
        }
};

//*OR

// class Solution{
//     public:
//         int prod = 1;
//         long long int factorial(int i, int n){
//             if(i > n){
//                 return prod;
//             }
//             prod*=i;
//             return factorial(i+1,n);

            
//         }
// };

int main(){
    int n;
    cin >> n;
    Solution sol;
    cout << sol.factorial(n);
    // cout << sol.factorial(1,n);


    return 0;
}

//*T.C: O(N)
//*S.C: O(N)
