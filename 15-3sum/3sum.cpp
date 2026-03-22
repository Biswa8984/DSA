class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return {};

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Use set to store unique triplets
        set<vector<int>> st;

        // Step 3: Fix one element
        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            // Step 4: Two pointer
            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    st.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        // Convert set to vector
        vector<vector<int>> ans(st.begin(), st.end());
        return ans; 
    }
};