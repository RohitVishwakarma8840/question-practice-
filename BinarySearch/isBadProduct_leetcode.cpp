// question no 278


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

 int start=1;
 int end=n;
 int ans=-1;

 while(start<=end){

 int mid=end+(start-end)/2;

if(isBadVersion(mid)){

ans=mid;
end=mid-1;

}

else if(!isBadVersion(mid)){
    start=mid+1;
}


 }
   return ans;
    
    }
};