/*
You are given an integer n. You need to return the number of digits in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Example 1:
Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.

Example 2:
Input: n = 14

Output: 2

Explanation: There are 2 digits in 14.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // int countDigit(int n){
        //     if(n == 0){
        //         return 1;
        //     }
        //     return log10(n) + 1;
        // }

        //T.C: O(log10 num)
        //S.C: O(1)

        //*OR

        int countDigit(int n){
            if(n == 0){
                return 1;
            }
            // int count = 0;

            // while(n > 0){
            //     n/=10;
            //     count++;
            // }
            // return count;

        //T.C: O(num of digits) = O(log10 num)
        //S.C: O(1)
        }

};


int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.countDigit(n);
    return 0;
    

}