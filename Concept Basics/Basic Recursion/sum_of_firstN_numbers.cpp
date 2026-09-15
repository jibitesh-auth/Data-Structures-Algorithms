#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int NnumbersSum(int N ){
            
            if(N == 0){
                return 0;
            }
            return N+NnumbersSum(N-1);
        }
};

//*OR

// class Solution{	
// 	public:
//         int sum = 0;
// 		int NnumbersSum(int i, int N){
//             if(i > N) return sum;
//             sum+=i;
//             return NnumbersSum(i+1,N);
			
// 		}
// };

int main(){
    int N;
    cin >> N;
    Solution sol;
    cout << sol.NnumbersSum(N);
}

//*T.C: O(N)
//*S.C: O(N)---> Recursion Stack Space

