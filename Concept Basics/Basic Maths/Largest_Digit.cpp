/*
You are given an integer n. Return the largest digit present in the number.

Example 1:
Input: n = 25

Output: 5

Explanation: The largest digit in 25 is 5.

Example 2:
Input: n = 99

Output: 9

Explanation: The largest digit in 99 is 9.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int largestDigit(int n){
            int largestD = 0;
            while(n > 0){
                int lastD = n % 10;
                if(lastD > largestD){
                    largestD = lastD;
                }
                n/=10;
            }
            return largestD;



        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.largestDigit(n);
    return 0;
}

//T.C: O(log10 N)
//S.C: O(1)