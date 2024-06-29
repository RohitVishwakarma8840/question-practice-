class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

         if (nums1.size() != nums2.size()) {
            return -1; // If the sizes of the arrays are different, return -1
        }
  

     sort(nums1.begin(),nums1.end());
     sort(nums2.begin(),nums2.end());

     int x=nums2[0]-nums1[0];

     int n=nums1.size();

        for (int i = 1; i < n; i++) {
            if (nums2[i] - nums1[i] != x) {
                return -1; // Return -1 if the condition is not met
            }
        }



  return x;
        
    }
};