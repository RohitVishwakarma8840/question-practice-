class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size(), col=matrix[0].size();
    int top=0,bottom=row-1, left=0,right=col-1;

  while(top<=bottom && left<=right){

// print top
for(int j=left;j<=right;j++)
ans.push_back(matrix[top][j]);
top++;

// print right
for(int i=top;i<=bottom;i++)
ans.push_back(matrix[i][right]);
right--;  

//print bottom 
if(top<=bottom){
for(int i=right;i>=left;i--)
ans.push_back(matrix[bottom][i]);
bottom--;
}

// print left
if(left<=right){
for(int i=bottom;i>=top;i--)
ans.push_back(matrix[i][left]);
left++;
}



  }


return ans;

    }
};