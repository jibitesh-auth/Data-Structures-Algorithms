#include <bits/stdc++.h>
using namespace std;

void explainCount(){
    int arr[5] = {6,2,1,1,0};
    //*Tells how many times that particular values appears
    // cout << count(arr,arr+5,1);
    int num = 1;
    auto i = count(arr,arr+5,num);
    cout << i;

    

}

int main(){
    explainCount();
    return 0;
}