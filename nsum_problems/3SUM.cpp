
class Solution{  
  public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Sort the array becoz it is not sorted using bubble sort or any technique you want 
        
       
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                // Swap A[j] and A[j+1]
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

        
        for(int i=0;i<n-2;i++){
            int ans=X-A[i];
     int start=i+1;int end=n-1;
     
     while(start<end){
         
         if(A[start]+A[end]==ans)
         return 1;
         else if(A[start]+A[end]<ans)
         start++;
         else
         end--;
     }
         
        }
    
        return 0;
        
        
    }

};