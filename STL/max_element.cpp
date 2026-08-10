#include <bits/stdc++.h>
using namespace std;

void explainMaxElement(){
    int arr[] = {7,6,5,10,9};
    //*Max
    // auto it = max_element(arr, arr+5);
    // cout << *it;

    // auto it = *max_element(arr, arr+5);
    // cout << it;

    //*Min

    auto it = *min_element(arr, arr+5);
    cout << it;

}

int main(){
    explainMaxElement();
    return 0;
}