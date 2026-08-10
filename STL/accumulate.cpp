#include <bits/stdc++.h>
using namespace std;

void explainAccumulate(){
    int arr[5] = {6,2,1,7,0};
    //*3rd para -> sum = 0 or anything 
    //* Gives the Total sum
    // cout << accumulate(arr,arr+5,0);
    cout << accumulate(arr+4,arr+5,0);

}

int main(){
    explainAccumulate();
    return 0;
}