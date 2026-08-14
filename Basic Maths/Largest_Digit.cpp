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