class Solution {
public:
    void sortColors(vector<int>& nums) {
         int count1 = 0, count2 = 0, count3 = 0;
        int size = nums.size();

        // Count the number of 0s, 1s, and 2s
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0)
                count1++;
            else if (nums[i] == 1)
                count2++;
            else
                count3++;
        }

        // Place the counted numbers back into the array
        int i = 0;
        while (count1--) {
            nums[i++] = 0;
        }
        while (count2--) {
            nums[i++] = 1;
        }
        while (count3--) {
            nums[i++] = 2;
        }
        
    }
};
