class Solution
{

public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    
     int way(int arr[] , int m , int sum){
         
         if(sum==0)
         return 1;
         
         if(sum<0)
         return 0;
         
         
         long long ans=0;
         for(int i=0;i<m;i++){
             
             ans+=way(arr, m,sum-arr[i]);
         }
         
         return ans%1000000007;
         
     }
    
    
    
    
    
    
    
    
    
    int countWays(int arr[], int m, int N) 
    { 
      
      
      
     return  way(arr, m,N);
      
      
    } 
    
};