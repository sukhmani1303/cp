#include<bits/stdc++.h>
using namespace std;

// TC of push : log(N)
// TC of top : (1)
// TC of pop : log(N)


int main(){
    // Maximum Heap 

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);

    cout<< pq.top();

    pq.pop();

    // Minimum Heap

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(66);
    pq1.push(67);
    pq1.emplace(2);

    // pq -> {2,66,67}

    pq1.top(); // 2 



    return 0;
}