/*
Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.

A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.

Example 1:
Input: nums = [7, 4, 1, 5, 3]

Output: [1, 3, 4, 5, 7]

Explanation: 1 <= 3 <= 4 <= 5 <= 7.

Thus the array is sorted in non-decreasing order.

Example 2:
Input: nums = [5, 4, 4, 1, 1]

Output: [1, 1, 4, 4, 5]

Explanation: 1 <= 1 <= 4 <= 4 <= 5.

Thus the array is sorted in non-decreasing order.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> selectionSort(vector<int>& num){
            for(int i=0; i<num.size()-1; i++){
                int min = i;
                for(int j=i+1; j<num.size()-1; j++){
                    if(num[j] < num[min]){
                        min = j;
                    }
                }
                if(min != i){
                    swap(num[min],num[i]);
                }
            }
            return num;
        }
};

int main(){
    vector<int> num;
    int x;
    while(cin >> x){
        num.push_back(x);
    }
    Solution sol;
    for(auto it: sol.selectionSort(num)){
        cout << it << " ";
    }
    return 0;

}

//*T.C: O(N^2)
//*S.C: O(1)