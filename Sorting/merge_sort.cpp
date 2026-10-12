#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> mergeSort(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        mergeSortHelper(nums,low,high);
        return nums;

    }
    void merge(vector<int>& arr,int low,int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left <= mid && right <= high){
            if(arr[left] < arr[right]){
                temp.emplace_back(arr[left]);
                left++;
            }
            else{
                temp.emplace_back(arr[right]);
                right++;
            }
        }
        while(left <= mid){
            temp.emplace_back(arr[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }
    void mergeSortHelper(vector<int>& arr, int low, int high){
        if(low >= high)
            return;
        int mid = (low+high)/2;
        mergeSortHelper(arr,low,mid);
        mergeSortHelper(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
};


int main(){
    vector<int> vec;
    int x;
    while(cin >> x){
        vec.push_back(x);
    }
    Solution sol;
    for(auto it: sol.mergeSort(vec)){
        cout << it << " ";
    }
    return 0;
}


//*T.C: O(nlogn)
//*S.C: O(n)
