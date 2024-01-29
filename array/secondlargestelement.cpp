// Function returns the second
// largest element
int print2largest(int arr[], int n) {
   int ans=-1;
   
   for(int i=0;i<n;i++){
       
       if(arr[i]>ans)
       ans=arr[i];
       
       
   }

// finding second largest element 
int secondans=-1;
for(int i=0;i<n;i++){
    
    if(arr[i]!=ans && arr[i]>secondans){
        
        secondans=arr[i];
    }
    
    
    
}

return secondans;
