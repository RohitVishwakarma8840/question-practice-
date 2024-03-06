class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int N=matrix.size(); int M=matrix[0].size();
       int start=0 ,end=M*N-1; // here end will be m*n-1 
    int row_index,col_index, mid;

while(start<=end){
// find mid 
mid=start+(end-start)/2;
row_index=mid/M;
col_index=mid%M;

if(matrix[row_index][col_index]==target)
return 1;
else if(matrix[row_index][col_index]<target){
    start=mid+1;
}
else{
    end=mid-1;
}

}

return 0;

    }
};