#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string largeOddSum(string& s){
            int ind = -1;
            int i;
            for(i=s.length() - 1; i>=0; i--){
                if((s[i] - '0') % 2 == 1){
                    ind = i;
                    break;
                }
            }
            i = 0;
            while(s[i] == '0' && i <= ind){
                i++;
                
            }
            return s.substr(i,ind-i+1);


        }
};

int main(){
    string str;
    cin >> str;
    Solution s;
    cout << s.largeOddSum(str);

    return 0;
}

//*T.C: O(n)
//*S.C: O(n)
/*Space Complexity: O(N), The auxiliary space used is O(1) but if the
space for returned string is considered (which will be O(N) in the worst
case), the overall space complexity comes out to be O(N).*/