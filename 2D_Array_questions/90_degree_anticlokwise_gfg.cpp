class Solution{
public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        
        // Transpoe the matrix 
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
        
        // column reverse 
        
        for(int j=0;j<n;j++){
            int start=0; int end=n-1;
            while(start<end){
                
                swap(matrix[j][start],matrix[j][end]);
                start++; end--;
            }
        }