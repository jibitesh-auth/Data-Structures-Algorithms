#include <bits/stdc++.h>
using namespace std;

void explainSort(){
    int arr[5] = {6,2,1,9,8};
    //*arr -> start
    //*2nd para -> not counted(end)
    // sort(arr,arr+5);
    // sort(arr,arr+3);
    // for(int i=0; i<5; i++){
    //     cout << arr[i] << " ";
    // }

    vector<int> vec = {5,9,8,2,1};
    // sort(vec.begin(), vec.end());
    sort(vec.begin() +1 , vec.begin()+4);
    for(auto it: vec){
        cout << it << " ";
    }


}

int main(){
    explainSort();
    return 0;
}