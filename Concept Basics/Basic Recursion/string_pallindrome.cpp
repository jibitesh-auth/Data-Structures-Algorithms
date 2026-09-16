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