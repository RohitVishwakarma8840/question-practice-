class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0; 
        int end = arr.size() - 1;
        int ans = -1;  
        int mid;

        while (start <= end) {
            mid = start + (end - start) / 2;

            // Found the target element
            if (arr[mid] == target)
                return mid;

            // Left side sorted
            else if (arr[mid] >= arr[0]) {
                if (arr[start] <= target && arr[mid] > target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }

            // Right side sorted
            else {
                if (arr[mid] < target && arr[end] >= target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1; // Target not found
    }
};