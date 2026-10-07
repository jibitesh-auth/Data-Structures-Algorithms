/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

E 

D E 

C D E 

B C D E 

A B C D E

*/

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void pattern18(int n){
            for(int i=n-1; i>=0; i--){
                for(char ch='A'+i; ch<='A'+n -1; ch++ ){
                    cout << ch<< " ";

                }
                cout << endl;
           
            }
            
            

        }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern18(n);
    return 0;
}

//T.C: O(N^2)
//S.C: O(1)