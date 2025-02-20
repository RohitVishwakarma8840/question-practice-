class Solution {
public:

// this solution has TLE in it
  int find(int index,vector<int>&nums,int n){

  // Base Case 
  if(index>=n)
  return 0;

  return max(nums[index]+find(index+2,nums,n), find(index+1,nums,n));



  }

    int rob(vector<int>& nums) {

   int n  = nums.size();

        return find(0,nums,n);
        
    }
};
