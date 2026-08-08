#include <bits/stdc++.h>
using namespace std;

void explainPQ(){
    //*stores the highest element at the top
    //*max heap(By default)

    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(10);
    // pq.push(8);

    // cout << pq.top() << " ";
    //10

    // pq.pop();
    // cout << pq.top();

    // while(pq.empty() == false){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    //*stores the smallest element at the top
    //*min heap

    priority_queue<int, vector<int>, greater<int>> pq;
    // priority_queue<char, vector<char>, greater<char>> pq;
    pq.push(2);
    pq.push(5);
    pq.push(10);
    pq.push(15);
    pq.emplace(25);

    while(pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << pq.size();

    




}








int main(){
    explainPQ();
    return 0;
}