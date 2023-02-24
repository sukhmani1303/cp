#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5; // this changes the last element -> makes it 9

    cout<<q.front(); // leftmost element

    q.pop();


    return 0;
}