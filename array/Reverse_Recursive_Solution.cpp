class Solution {
  public:
  
   void Rev(vector<int> &arr,int l ,int r){
       if(l>=r)
       return;
       
       swap(arr[l],arr[r]);
       
       Rev(arr,l+1,r-1);
   }
    void reverseArray(vector<int> &arr) {
        
     int n = arr.size();
     
      Rev(arr,0,n-1);
        
    }
};
