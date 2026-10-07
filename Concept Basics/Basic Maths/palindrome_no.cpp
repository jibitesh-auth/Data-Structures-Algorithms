/*
You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

A palindrome number is a number which reads the same both left to right and right to left.

Example 1:
Input: n = 121

Output: true

Explanation: When read from left to right : 121.

When read from right to left : 121.

Example 2:
Input: n = 123

Output: false

Explanation: When read from left to right : 123.

When read from right to left : 321.

*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool isPalindrome(int n){
            int org = n;
            int rev = 0;
            while(n > 0){
                int lastD = n % 10;
                rev = rev * 10 + lastD;

                n/=10;

            }
            if (rev == org){
                return true;
            }
            else{
                return false;
            }

        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    if(s.isPalindrome(n)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;

}


//*T.C: O(log10(N))
//*S.C: O(1)