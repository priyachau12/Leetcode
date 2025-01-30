class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); // Initialize with -1 (default if no greater element is found)
        
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) { // Start from the next element
                int index = (i + j) % n;  // Circular index
                if (nums[index] > nums[i]) {  
                    ans[i] = nums[index]; // First greater element found
                    break;
                }
            }
        }
        
        return ans;
    }
};
