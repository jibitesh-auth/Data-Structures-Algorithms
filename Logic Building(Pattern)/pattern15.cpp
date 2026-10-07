/*
Given an integer n. 
You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

ABCDE

ABCD

ABC

AB

A
*/


#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        void pattern15(int n){
            for(int i=0; i<n; i++){
                for(char j='A';j <'A'+(n-i); j++){
                    cout << j;
                }
                cout << endl;
            }

        }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    s.pattern15(n);
    return 0;
}

//T.C: O(N^2)
//S.C: O(1)