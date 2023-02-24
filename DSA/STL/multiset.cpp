#include<bits/stdc++.h>
using namespace std;

// stores multiple occurances

int main(){

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1); // {1,1,2}

    ms.erase(1); // all 1s erased -> {2}

    ms.erase(ms.find(1)); // only single occurance deleted


    return 0;
}