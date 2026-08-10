#include <bits/stdc++.h>
using namespace std;

void explainFind(){
    int arr[5] = {6,2,1,1,0};
    //*Returns the first occurence
    // auto it = find(arr,arr+5,1);
    // cout << *it;
    auto it = find(arr,arr+5,8);
    if(it == arr+5){
        cout <<"Not found";
    }

    

}

int main(){
    explainFind();
    return 0;
}