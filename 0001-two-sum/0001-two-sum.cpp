class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;
        for (i; i<nums.size(); i++ ){
            for (j=i+1; j<nums.size(); j++ ){
                if ((nums[i]+nums[j])==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna