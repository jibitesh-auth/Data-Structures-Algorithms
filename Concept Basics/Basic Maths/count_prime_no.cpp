/*
You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.

A prime number is a number which has no divisors except, 1 and itself.

Example 1:
Input: n = 6

Output: 3

Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

Example 2:
Input: n = 10

Output: 4

Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
        bool isprime(int n){
            if(n<=1){
                return false;

            }
            // if(n == 2){
            //     return true;
            // }
            for(int i=2; i*i<=n; i++){
                if(n%i == 0){
                    return false;

                }

            }
            return true;
            
        }
    public:
        int primeUptoN(int n){
            int count = 0;
            for(int i = 2; i<=n; i++){
                if(isprime(i)){
                    count++;

                }
            }
            return count;


        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.primeUptoN(n);
    return 0;

}


//* T.C: O(N*sqrt(N))
//* S.C: O(1)









