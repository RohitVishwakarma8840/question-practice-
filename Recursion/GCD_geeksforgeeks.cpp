class Solution {
  public:
    int gcd(int a, int b) {
        
        
        if(b==0)
        return a;
        
        gcd(b, a%b);
        
        
    }
};