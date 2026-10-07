/*
You are given an integer n. You need to return the number of odd digits present in the number.

The number will have no leading zeroes, except when the number is 0 itself.

Example 1:
Input: n = 5

Output: 1

Explanation: 5 is an odd digit.

Example 2:
Input: n = 25

Output: 1

Explanation: The only odd digit in 25 is 5.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

        int countOddDigit(int n){
            if(n == 0){
                return 0;
            }
            int count = 0;

            while(n > 0){
                int lastD = n % 10;
                n/=10;
                if(lastD%2 == 1){
                    count++;
                }
            }
            return count;

        //T.C: O(no of digit) = O(log10 num)
        //S.C: O(1)
        }

};


int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.countOddDigit(n);
    return 0;
    

}