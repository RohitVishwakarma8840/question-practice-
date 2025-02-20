class Solution {
public:
  

  // This soln has tle but for imp for recursion concept 
  int find(int index,int n, vector<int>&nums){

  if(index >= n)
  return 0;

  return max(nums[index]+find(index+2,n,nums),find(index+1,n,nums));




  }








    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n==1)
        return nums[0];

        
        return max(find(0,n-1,nums),find(1,n,nums));
        
    }
};
