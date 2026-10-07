/*
Given a string, the task is to reverse it. The string is represented by an array of characters s.

Perform the reversal in place with O(1) extra memory.

Note: no need to return anything, modify the given list.

Example 1:
Input : s = ["h", "e" ,"l" ,"l" ,"o"]

Output : ["o", "l", "l", "e", "h"]

Explanation :

The given string is s = "hello" and after reversing it becomes s = "olleh".

Example 2:
Input : s = ["b", "y" ,"e" ]

Output : ["e", "y", "b"]

Explanation :

The given string is s = "bye" and after reversing it becomes s = "eyb".
*/

//*-------------------------------------X-------------------------------------------------

//*Optimal
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//         void reverse_string(vector<char>& ch, int n){
//             int i=0,j=n-1;
//             while(i<j){
//                 char extra = ch[i];
//                 ch[i] = ch[j];
//                 ch[j] = extra;
//                 i++;
//                 j--;


//             }
//             for(auto a: ch){
//                 cout<<a << " ";
//             }
//         }
// };

// int main(){
//     int n;
//     char x;
//     cin >> n;
//     vector<char> vec;
//     for(int i=0; i<n; i++){
//         cin >> x;
//         vec.push_back(x);
//     }

//     Solution s;
//     s.reverse_string(vec,n);
//     return 0;
// }

//*                   OR

// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         void reverseString(vector<char> &s){
//             int start=0,end=s.size()-1;
 
//             while(start<end){
//                 char ch=s[start];
//                 s[start]=s[end];
//                 s[end]=ch;
 
//                 start++,end--;
//             }
           
//         }
 
// };
// int main(){
   
//     Solution sol;
//     string str;
//     cin >>str;              
//     vector<char> s(str.begin(), str.end());
//     sol.reverseString(s);
//     for(char c:s){
//         cout<<c;
//     }
 
 
//     return 0;
// }

//*T.C: O(N)
//*S.C: O(1)

//-------------------------x-------------------------------

//* BRUTE-FORCE

// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         void reverseString(vector<char> &s){
//             int n = s.size();
//             vector<int> temp(n);
//             for(int i=0; i<n; i++){
//                 temp[i] = s[n-i-1];
//             }
//             for(int i=0; i<n; i++){
//                 s[i] = temp[i];
//             }
 
            
           
//         }
 
// };
// int main(){
   
//     Solution sol;
//     string str;
//     cin >>str;              
//     vector<char> s(str.begin(), str.end());
//     sol.reverseString(s);
//     for(char c:s){
//         cout<<c;
//     }
 
 
//     return 0;
// }
//*T.C: O(N)
//*S.C: O(N)

//-----------------------------x--------------------------

#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
        void reverseString(vector<char> &s){
            int n = s.size();
 
            for(int i=0; i<n/2; i++){
                // char ch=s[i];
                // s[i]=s[n-i-1];
                // s[n-i-1]=ch;
                swap(s[i],s[n-i-1]);
            }
           
        }
 
};
int main(){
   
    Solution sol;
    string str;
    cin >>str;              
    vector<char> s(str.begin(), str.end());
    sol.reverseString(s);
    for(char c:s){
        cout<<c;
    }
 
 
    return 0;
}

//*T.C: O(N)
//*S.C: O(1)

 