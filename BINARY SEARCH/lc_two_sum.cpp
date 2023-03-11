// two pointer
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<pair<int,int>> v;

    for(int i =0; i<nums.size(); i++){
        v.push_back({nums[i], i});
    }

    sort(v.begin(), v.end());

    int i=0, j = nums.size()-1;

    while(i<j){
        //cout<<i<<"\t"<<nums[i]<<"\t"<<nums[j]<<endl;
        if(v[i].first + v[j].first == target) return {v[i].second , v[j].second};
        else if(v[i].first + v[j].first > target) j--;
        else i++ ;
    }
    return {};
    }
};


//unordered maps

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    map<int,int> m;

    for( int i = 0; i < nums.size(); i++){
        if(m.find(target - nums[i]) != m.end()){
            return {i, m[target - nums[i]] };
        }
        m[nums[i]] = i;
    }

    return {};

    }
};
