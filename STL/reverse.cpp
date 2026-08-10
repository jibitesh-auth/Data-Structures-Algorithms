#include <bits/stdc++.h>
using namespace std;

void explainReverse(){
    int arr[] = {2,4,5,6,7};
    reverse(arr,arr+5);
    for(int i=0; i<5; i++){
        cout <<arr[i] << " ";
    }

    //*Output
    //7 6 5 4 2 

}

int main(){
    explainReverse();
    return 0;
}