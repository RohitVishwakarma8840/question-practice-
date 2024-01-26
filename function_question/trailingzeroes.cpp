// geeks for geeks // 

class Solution
{
public:
    int trailingZeroes(int N){
    int rem;
    int count=0;
    while(N>=5){
        
        
        rem=N/5;
      count=count+rem;
        N=N/5;
        
   
    }

        
        return count;

        
    }
};