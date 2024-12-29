class  Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        
  long long int mini = INT_MAX , maxi = INT_MIN;
  int n = arr.size();
  
  for(int i=0; i<n ; i++){
      
     mini = min(arr[i],mini);
     
     maxi = max(arr[i],maxi);
 
  }
        
        
        return {mini,maxi};
        
    }
};
