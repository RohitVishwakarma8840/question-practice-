Given a positive integer N, print count of set bits in it. 

class Solution{
  public:

 int setBits(int N) {
        // Write Your Code here
       int count = 0;
    while (N) {
        count += N % 2;
        N /= 2;
    }
    return count;
        
        
        
        
        
    }
};


        
        
        
        
   