/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1

22

333

4444

55555

*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static void pattern4(int n){
            
            for(int i=1; i<=n; i++){
                for(int j=1; j<=i; j++){
                    cout << i;
                }
                cout << endl;
                
            }


        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern4(n);
    return 0;

}

//T.C: O(N^2)
//S.C: O(1)