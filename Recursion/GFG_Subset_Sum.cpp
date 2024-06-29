class Solution {
public:
    void findsum(vector<int>& arr, int index, int size, int sum, vector<int>& result) {
        // Base case: if we've reached the end of the array, add the sum to the result and return
        if (index == size) {
            result.push_back(sum);
            return;
        }
        
        // Include the current element in the subset sum
        findsum(arr, index + 1, size, sum + arr[index], result);
        
        // Exclude the current element from the subset sum
        findsum(arr, index + 1, size, sum, result);
    }
    
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> result;
        findsum(arr, 0, n, 0, result);
        return result;
    }
};
