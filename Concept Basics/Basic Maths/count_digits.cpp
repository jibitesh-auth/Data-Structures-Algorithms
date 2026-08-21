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