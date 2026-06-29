#include<bits/stdc++.h>
using namespace std;

int main() {
    // int age;
    // cin >> age;
    // if (age >= 18) {
    //     cout << "Adult";
    // }
    // else{
    //     cout << "Teen";
    // }

    //------------x------------

    // int age;
    // cin >> age;
    // if (age >= 18) {
    //     cout << "adult";
    // }
    // else if(age < 18 && age >= 10){
    //     cout << "teen";
    // }
    // else{
    //     cout << "child";
    // }
    

    //---------------x----------

    // int marks;
    // cin >> marks;
    // if(marks >= 90){//false
    //     cout << "Grade:A";
    // }
    // else if(marks >= 70 && marks < 90){//true
    //     cout<<"Grade:B";
    // }
    // else if(marks >= 50 && marks < 70){
    //     cout << "Grade:C";
    // }
    // else if(marks >= 35 && marks < 50){
    //     cout<<"Grade:D";
    // }
    // else{
    //     cout<<"Fail";
    // }

    // int marks;
    // cin >> marks;
    // if(marks >= 90){//false
    //     cout << "Grade:A";
    // }
    // else if(marks >= 70){//true
    //     cout<<"Grade:B";
    // }
    // else if(marks >= 50){
    //     cout << "Grade:C";
    // }
    // else if(marks >= 35){
    //     cout<<"Grade:D";
    // }
    // else{
    //     cout<<"Fail";
    // }


    // return 0;

    //-----------x--------------
    
    //nested if-else
    int a,b,c;
    cin >> a >> b>>c;
    if(a>=b){
        if(a>=c){
            cout<<"Largest is A";
        }
        else{
            cout<<"Largest is C";
        }

    }
    else if(b>=c){
        cout << "B";
    }
    else{
        cout<<"C";
    }
    return 0;
    
    


}