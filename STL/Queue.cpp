#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    //FIFO
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(10);
    q.emplace(11);

    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }

    //*size
    cout << q.size();  //0

    //*swap

    // queue <int> q1;
    // q1.push(5);
    // q1.push(7);
    // q1.push(9);
    // q1.push(50);
    // q1.emplace(80);

    // swap(q,q1);
    // while(q1.empty() == false){
    //     cout << q1.front() << " ";
    //     q1.pop();
    // }


}


int main(){
    explainQueue();

    return 0;
}