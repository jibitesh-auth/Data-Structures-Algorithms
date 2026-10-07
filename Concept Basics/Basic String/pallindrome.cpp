/*
You are given a string s. Return true if the string is palindrome, otherwise false.

A string is called palindrome if it reads the same forward and backward.

Example 1:
Input : s = "hannah"

Output : true

Explanation :

The given string when read backward is -> "hannah", which is same as when read forward.

Hence answer is true.

Example 2:
Input : s = "aabbaaa"

Output : false

Explanation :

The given string when read backward is -> "aaabbaa", which is not same as when read forward.

Hence answer is false.
*/


//*-----------------------------------X-----------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         bool pallindrome(string& s){
//             int n = s.size();
            // int start = 0, end = s.size() -1;
            // while(start < end){
            //     if(s[start] != s[end]){
            //         return false;
            //     }
            //     start++;
            //     end--;
            // }

             //* OR

//             for(int i=0; i<n/2; i++){
//                 if(s[i] != s[n-i-1]){
//                     return false;
//                 }
//             }
//             return true;


//         }
// };

// int main(){
//     string s;
//     cin >> s;

//     Solution s2;
//     bool ans = s2.pallindrome(s);
//     if(ans){
//         cout << "Pallindrome";
//     }
//     else{
//         cout << "Not Pallindrome";
//     }

    

//     return 0;
// }

//*T.C: O(N)
//*S.C: O(1)

//* Can also be done using recursion

//--------------------------------X------------------------------
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool pallindrome(string& s){
            string s1 = s;
            int n = s.size();
            for(int i=0; i<n/2; i++){
                swap(s[i],s[n-i-1]);
            }

            return s1==s;
        }
};

int main(){
    string s;
    cin >> s;

    Solution s2;
    bool ans = s2.pallindrome(s);
    if(ans){
        cout << "Pallindrome";
    }
    else{
        cout << "Not Pallindrome";
    }

    

    return 0;
}

//*T.C: O(n)
//*S.C: O(1)


