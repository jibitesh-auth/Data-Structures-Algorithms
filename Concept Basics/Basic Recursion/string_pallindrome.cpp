/*
Given a string s, return true if the string is palindrome, otherwise false.

A string is called palindrome if it reads the same forward and backward.

Example 1:
Input : s = "hannah"

Output : true

Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

Example 2:
Input : s = "aabbaA"

Output : false

Explanation : The string when reversed is --> "Aabbaa", which is not same as original string, So we return false.
*/



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool palindromeCheck(string &s)
    {
        return reverse(s,0,s.length() - 1);
    }

private:
    bool reverse(string& s, int left, int right)
    {
        if (left >= right)
        {
            return true;
        }
        if(s[left] != s[right]){
            return false;
        }
        return reverse(s,left+1,right-1);
    }
        
        
};

int main(){
    string s;
    cin >> s;
    Solution sol;
    cout << sol.palindromeCheck(s);

    return 0;                                                
}


//*T.C: O(N/2) = O(N)
//*S.C: O(N/2) = O(N)