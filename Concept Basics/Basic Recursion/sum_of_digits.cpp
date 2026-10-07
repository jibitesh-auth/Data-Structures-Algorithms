/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example 1:
Input : num = 529

Output : 7

Explanation : In first iteration the digits sum will be = 5 + 2 + 9 => 16

In second iteration the digits sum will be 1 + 6 => 7.

Now single digit is remaining , so we return it.

Example 2:
Input : num = 101

Output : 2

Explanation : In first iteration the digits sum will be = 1 + 0 + 1 => 2

Now single digit is remaining , so we return it.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int addDigits(int num){
            if(num < 10){
                return num;
            }
            
            return addDigits(addD(num));

        }


    private:
        int addD(int num){
            if(num == 0){
                return 0;
            }
            return num % 10 + addDigits(num/10);
        }
};

int main(){
    int num;
    cin >> num;
    Solution sol;
    cout << sol.addDigits(num);

    return 0;
}


//*T.C: O(log n) – This is because each recursive call processes a number with fewer digits than the previous call, leading to logarithmic time complexity in terms of the number of digits.


//*S.C: O(logN)