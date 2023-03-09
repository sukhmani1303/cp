class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
        map<int,int> m2;
        vector<int> v;

        for(auto it : nums1){
            m1[it]++;
        }

        for(auto it : nums2){
            m2[it]++;
        }

        for(auto it : m1){

            auto it2 = m2.find(it.first);

            if(it2 != m2.end()){

                int min_val = min(it.second, it2->second);
                while(min_val!=0){
                    v.emplace_back(it.first);
                    min_val--;
                }
            }
            
        }

        return v;
        
    }
};