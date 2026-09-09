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
 
 
