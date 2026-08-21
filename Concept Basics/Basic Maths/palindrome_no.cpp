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