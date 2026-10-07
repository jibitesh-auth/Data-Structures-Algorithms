/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:
Input : s = "abcde" , goal = "cdeab"

Output : true

Explanation :

After performing 2 shifts we can achieve the goal string from string s.

After first shift the string s is => bcdea

After second shift the string s is => cdeab.

Example 2:
Input : s = "abcde" , goal = "adeac"

Output : false

Explanation :

Any number of shift operations cannot convert string s to string goal.
*/


//*------------------------------------------x-------------------------------------------------------


//*BRUTE

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         bool rotateString(string& s, string& goal){
//             if(s.length() != goal.length()){
//                 return false;
//             }
//             for(int i=0; i<s.length(); i++){
//                 string rotated = s.substr(i) + s.substr(0,i);
//                 if(rotated == goal){
//                     return true;
//                 }
//             }
//             return false;
//         }
// };

// int main(){

//     string s,t;
//     cin >> s >> t;
//     Solution sol;
//     cout << sol.rotateString(s,t);
//     return 0;

// }

//*T.C: O(N^2)---> O(n)[for loop], O(n)[substr]
//*S.C: O(N)
//------------x---------------

//*OPTIMAL

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool rotateString(string& s, string& goal){
            string rotated = s+s;
            return rotated.find(goal) != string::npos;
        }
};

int main(){
    string s,goal;
    cin >> s >> goal;

    Solution sol;
    cout << sol.rotateString(s,goal);
    return 0;
}

//*T.C:O(N)
//*S.C: O(N)

//* .find()->[Robin Karp Method]
//    If found → returns the starting index.
//    If not found → returns string::npos(mean-not found)
 
//*In Python-in
//*In Java-.contains()
 
 
