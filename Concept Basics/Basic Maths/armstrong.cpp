#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    private:
        int countDigit(int n){
            if(n == 0){
                return 1;
            }
            return log10(n) + 1;
 
        }
    public:
        bool isArmstrong(int n){
            int countD = countDigit(n);
            int org = n;
            int sum = 0;
            while(n > 0){
                int lastD = n % 10;
                sum += pow(lastD,countD);
                n/=10;
 
            }
            if(sum == org){
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
    bool ans = s.isArmstrong(n);
   
    if(ans) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
   
   
    return 0;
}


//*T.C: O(digits * log2(digits))
//*S.C: O(1)