bool findPair(int arr[], int size, int n){
    //code
    int N;
 
     vector<int> a(arr, arr + size); // Copying array to vector
    sort(a.begin(), a.end()); // Sorting the vector
    sort(a.begin(),a.end());
    
    int start = 0, end = 1, last = size; // Initializing pointers
    
    while (end < last) {
        if (a[end] - a[start] == n) // If difference is equal to n, return true
            return true;
        else if (a[end] - a[start] < n) // If difference is less than n, move end pointer forward
            end++;
        else // If difference is greater than n, move start pointer forward
            start++;
        
        if (start == end) // If both pointers are at the same position, move end pointer forward
            end++;
    }
    
    return false; // Return false if pair not found
}
