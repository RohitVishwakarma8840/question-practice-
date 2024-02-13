class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
             int start=0; int end=0; 
  int mid; int ans;

  for(int i=0; i<weights.size();i++){
  start=max(start,weights[i]);
  }

for(int i=0; i<weights.size();i++){
end+=weights[i];
}

while(start<=end){

mid=start+(end-start)/2;

int mass=0; int count=1;

for(int i=0;i<weights.size();i++){

mass+=weights[i];

if(mass>mid){
count++;
mass=weights[i];
}
}

if(count<=days){
ans=mid;
end=mid-1;

}
else
start=mid+1;
}



return ans;
 
    }
};