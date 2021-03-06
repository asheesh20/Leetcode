class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return index != nums.size() && nums[index] == target ? index : -1;
    }
};