#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

        int countDigit(int n){
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
    cout << s.countDigit(n);
    return 0;
    

}