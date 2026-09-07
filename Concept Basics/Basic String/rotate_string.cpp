#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool rotateString(string &s, string &goal)
    {
        int count = 0;
        while (count < s.length())
        {
            count++;
            int n = s.length();
            char x;
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    x = s[0];
                    continue;
                }
                else if (i == n - 1)
                {
                    s[i - 1] = s[i];
                    s[i] = x;
                    continue;

                }
                s[i - 1] = s[i];
            }
            if(s == goal){
                return true;
            }

            
        };
        return false;
    }
};

int main(){
    string s,t;
    cin >> s >> t;
    Solution sol;
    cout << sol.rotateString(s,t);
    return 0;
}