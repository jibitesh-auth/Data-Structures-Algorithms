#include <bits/stdc++.h>
using namespace std;

//*Override the Internal Comparator
bool internalComparator(int el1, int el2){
    if(el1 < el2){
        return false;
    }
    return true;
}

void explainComparator(){
    int arr[] = {5,6,1,2};
    // el1 is 5
    // el2 is 6
    // internal comparator that takes el1 and el2
    // and tells you if el1 should be before el2 or not

    // el1 is 6
    // el2 is 1 --------No (1 should be before 6)
    // sort(arr,arr+4); //*Default Internal Comparator(Ascending)
    // for(int i=0; i<4; i++){
    //     cout << arr[i] << " ";
    // }

//---------------x-------------------

    sort(arr,arr+4,internalComparator);
    for(int i=0; i<4; i++){
        cout << arr[i] << " ";
    }
    

}

int main(){
    explainComparator();
    return 0;
}