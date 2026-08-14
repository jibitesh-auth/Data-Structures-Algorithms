#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // bool isPrime(int n){
        //     if(n <= 1){
        //         return false;
        //     }
        //     for(int i = 2; i<n; i++){
        //         if(n%i == 0){
        //             return false;
        //         }
        //     }
        //     return true;
        // }

        //*OR

        bool isPrime(int n){
            if(n <= 1){
                return false;
            }
            for(int i = 2; i*i<=n; i++){
                if(n%i == 0){
                    return false;
                }
            }
            return true;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    if(s.isPrime(n)){
        cout << "Prime no";
    }
    else{
        cout << "Non Prime no";
    }
    return 0;
    

}

//*T.C: O(sqrt(N))
//*S.C: O(1)

