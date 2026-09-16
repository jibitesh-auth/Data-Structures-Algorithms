#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool checkPrime(int num){
            if(num <= 1){
                return false;
            }
            return prime(num,2);

        }

        bool prime(int num, int i){
            if(i > sqrt(num)){
                return true;
            }
            if(num % i == 0){
                return false;
            }
            return prime(num,i+1);
        }

};

int main(){
    int num;
    cin >> num;
    Solution sol;
    cout << sol.checkPrime(num);
    return 0;
}

//*T.C: O(sqrt(N))
//*S.C: O(sqrt(N))