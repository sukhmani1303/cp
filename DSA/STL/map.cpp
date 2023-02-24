#include<bits/stdc++.h>
using namespace std;

// key -> unique in sorted order
// key value pair

int main(){

    map<int,int> m;
    map<int, pair<int,int>> m;
    map<pair<int,int>,int> m1;

    m[1] = 2;
    
    m.emplace(3,1);
    m.insert({2,4});

    m1[{2,3}] = 10;

    // looping

    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m[1];

    auto it = m.find(1);
    cout<<(it).second;

    auto it = m.find(5);


    return 0;
}