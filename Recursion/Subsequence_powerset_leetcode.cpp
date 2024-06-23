class Solution {
public:


void Subsequence(vector<int>&arr,int index, int size , vector<vector<int>>&ans,vector<int>temp){

if(index==size){
    ans.push_back(temp);
    return ;
}

// DO Not Add 
Subsequence(arr,index+1,size,ans,temp);

// Adding the 
    temp.push_back(arr[index]);

Subsequence(arr,index+1,size,ans,temp);



}

    vector<vector<int>> subsets(vector<int>& nums) {
        
vector<vector<int>>ans;
vector<int>temp;

Subsequence(nums,0,nums.size(),ans,temp);
    return ans;

    }
    
};