 
class Solution
{
 
 public:
    long long minTime(int A[], int n, int k)
    {
       
  long long int start=0; long long  int end;
  long long int mid;  long long  int ans;
  
 for(int i=0; i<n;i++){
     
     if(A[i]>start){
         start=A[i];
     }
 }
 
for(int i=0;i<n;i++){
    
    end+=A[i];
}
 
 while(start<=end){
     
     mid=start+(end-start)/2;
     
  long long int pages=0;  long long  int count=1;
 
 for(int i=0;i<n;i++){
     
     pages+=A[i];
     
     if(pages>mid){
         
         count++;
         pages=A[i];
         
     }
 }
     if(count<=k){
         
         ans=mid;
         end=mid-1;
         
     }
     else
         start=mid+1;
     
    
 
 }
 
 
 
      return ans;
       
    }
};