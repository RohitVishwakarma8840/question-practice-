	int search(int arr[], int n, int k) {
	    
	    for(int i=0;i<=n;i=i+1){
	        
	        if(k==arr[i]){
	            
	            return i+1;
	        }
	       
	    }
	    
	    return -1;
	    
	    
	    
	    