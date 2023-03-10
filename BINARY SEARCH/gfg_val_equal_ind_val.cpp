class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    long int i = 1;
	    vector<int> v;
	    for(int it = 0; it<n; it++){
	        if(arr[it] == i){
	            v.emplace_back(arr[it]);
	        }
	        i++;
	    }
	    
	    return v;
	}
};