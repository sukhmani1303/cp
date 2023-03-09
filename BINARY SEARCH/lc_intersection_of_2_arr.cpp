class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        // i is for nums1 
        // j is ofr nums2
        // set<int> s;
        vector<int> v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while((i< nums1.size()) and (j< nums2.size())){
            cout<<"\n i : "<<i<<"\n j : "<<j;
            if(nums1[i] == nums2[j]){
                if(find(v.begin(), v.end(), nums1[i]) == v.end()) v.emplace_back(nums1[i]);
                // s.emplace(nums1[i]);
                // cout<<"\nmatch at : "<<i<<" "<<j<<" val : "<<nums1[i];
                i++;
                j++;
            }

            else if(nums1[i] > nums2[j]){
                j++;
            }
            else if(nums1[i] < nums2[j]) i++;

            if (i== nums1.size()) break;
            if (j== nums2.size()) break;
        }

        // v.assign( s.begin(), s.end() );
        return v;
    }
};