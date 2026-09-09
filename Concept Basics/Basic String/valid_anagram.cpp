/*
Valid Anagram

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, otherwise return `false`.

Two strings are anagrams if they contain the **same characters with the same frequencies**, possibly in a different order.

Example:

s = "anagram"
t = "nagaram"

Output: true

Constraints:

-> 1 <= s.length, t.length <= 5 * 10^4
-> Only lowercase English letters.

*/
//---------------x-------------

//*Solution


//*My Approach
// #include <bits/stdc++.h>
// using namespace std;


// class Solution{
//     public:
//         bool anagramStrings(string& s, string& t){
//             int arr[26] = {0};
//             if(s.length() != t.length()) return false;
//             for(int i=0; i<s.length(); i++){
//                 arr[s[i] - 'a']+=1;
//                 arr[t[i] - 'a'] +=1;
//             }
//             for(int i=0; i<s.length(); i++){
//                 if(arr[s[i] - 'a'] != 2){
//                     return false;
//                 }
//             }
//             return true;

        
//         }
// };
// int main(){
//     string s,t;
//     cin >> s >> t;
//     Solution sol;
//     cout << sol.anagramStrings(s,t);
//     return 0;
// }

//--------------------------X-----------------------
 
//*Optimal
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool anagramStrings(string& s, string& t){
            if(s.length() != t.length()){
                return false;
            }

            /*
            transform(s.begin(),s.end(),s.begin(),::tolower)
            
            transform(t.begin(),t.end(),t.begin(),::tolower)
            
            TO convert uppercase to lower*/

            vector<int> count(26,0);
            for(char c:s) count[c - 'a']++;
            for(char c:t) count[c - 'a']--;

            for(int i: count){
                if(i!=0){
                    return false;
                }
            }
            return true;
            
        }
};

int main(){
    string s,t;
    cin>>s>>t;
    Solution sol;
    if(sol.anagramStrings(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
 
//*T.C:O(n)
//*S.C:O(1)
 
//------------------------------X----------------------------------
 
//*Striver hash way
 
// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         bool anagramStrings(string &s,string &t){
//             if(s.length() != t.length()){
//                 return false;
//             }
//             int freqS[26] = {0}, freqT[26] = {0};
//             int n = s.length();
//             for(int i=0; i<n; i++){
//                 freqS[s[i] - 'a']++;
//                 freqT[t[i] - 'a']++;

//             }
//             for(int i=0; i<26; i++){
//                 if(freqS[i] != freqT[i]){
//                     return false;
//                 }
//             }
//             return true;
//         }
// };
 
// int main(){
//     string s,t;
//     cin>>s>>t;
//     Solution sol;
//     if(sol.anagramStrings(s,t)){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }
 
//*T.C:O(n)+O(26)=O(n)
//*S.C:2*O(26)

//------------------------------------x--------------------------

//*Brute Force

// #include <bits/stdc++.h>
// using namespace std;
 
// class Solution{
//     public:
//         bool anagramStrings(string &s,string &t){
//             if(s.length()!=t.length()){
//                 return false;
//             }
//             sort(s.begin(),s.end());
//             sort(t.begin(),t.end());

//             return s == t;
//         }
// };
 
// int main(){
//     string s,t;
//     cin>>s>>t;
//     Solution sol;
//     if(sol.anagramStrings(s,t)){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }

//*T.C: O(N log N)
//*S.C: O(1)

