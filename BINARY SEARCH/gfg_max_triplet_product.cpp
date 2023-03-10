
class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	
        long long max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
        
        for(int i = 0; i < n; i++){
            if(arr[i]>max1){
                max3 = max2;
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i]>max2){
                max3 = max2;
                max2 = arr[i];
            }
            else if(arr[i]> max3){
                max3 = arr[i];
            }
            
            //min
            
            if(arr[i]<min1){
                min2 = min1;
                min1 = arr[i];
            }
            else if(arr[i]<min2){
                min2 = arr[i];
            }
        }
        
        return max(min1*min2*max1, max1*max2*max3);
    }
};