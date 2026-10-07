/*
Given an input string as an array of characters, write a function that reverses the string.

Example 1:
Input : s = ["h", "e", "l", "l", "o"]

Output : ["o", "l", "l", "e", "h"]

Explanation : The given string is s = "hello" and after reversing it becomes s = "olleh".

Example 2:
Input : s = ["b", "y", "e" ]

Output : ["e", "y", "b"]

Explanation : The given string is s = "bye" and after reversing it becomes s = "eyb".
*/

//*---------------------------x------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         vector<char> reverseString(vector<char>& s){
//             reverse(s,0,s.size()-1);
//             return s;
            
//         }

//     private:
        // void reverse(vector<char>& s, int left, int right){
        //     if(left >= right){
        //         return;
        //     }
        //     char temp = s[left];
        //     s[left] = s[right];
        //     s[right] = temp;
        //     reverse(s,left+1,right-1);
        // }
// };

// int main(){
//     vector<char> vec;
//     char c;
//     while(cin >> c){
//         vec.push_back(c);
//     }
//     Solution sol;
//     vector<char> v = sol.reverseString(vec);

//     for(auto it: v){
//         cout << it << " ";
//     }


//     return 0;
// }

//*T.C: O(N/2): O(N)
//*S.C: O(N/2): O(N)

//-----------x--------------

//*OR

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<char> ch;
        vector<char> reverseString(vector<char>& s){
            if(s.empty()) return ch;
            ch.push_back(s.back());
            s.pop_back();
            return reverseString(s);
        }
};

int main(){
    vector<char> vec;
    char x;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution sol;
    vector<char> v = sol.reverseString(vec);
    for(auto it: v){
        cout << it << " ";
    }

    return 0;
}

//*T.C: O(N)
//*S.C: O(N)




