/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****

****

***

**

*


*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        static void pattern5(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<n-i; j++){
                    cout << "*";
                }
                cout << endl;
            }
            

        }

};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern5(n);
    return 0;
}

//T.C: O(N^2)
//S.C: O(1)