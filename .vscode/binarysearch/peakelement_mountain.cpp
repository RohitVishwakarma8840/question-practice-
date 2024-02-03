class Solution
{
    public:
    
    int peakElement(int arr[], int n)
    {
       // Your code here
       
       int start=0;
       int end=n-1;
       int mid=start+(end-start)/2;
       
       while(start<=end){
           
           
           
             if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
                (mid == n - 1 || arr[mid] >= arr[mid + 1]))
            {
                return mid;
            }
           
           if(arr[mid]<arr[mid+1]){
               start=mid+1;
               }
           
           else{
               end=mid;
           }
           
           mid=start+(end-start)/2;
           
       }
       
       
  
       return mid;
       
       
       
    }
};