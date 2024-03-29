class Solution {
    private:
    int firstGreatEqual(vector<int>& t, int tr){
        return lower_bound(t.begin(), t.end(), tr) - t.begin();
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        const int n = nums.size();
        vector<int> tail;
        
        for(int num : nums){
            if(tail.empty() || num > tail.back()){
                tail.push_back(num);
            }
            else{
                tail[firstGreatEqual(tail, num)] = num;
            }
        }
        
        return tail.size();
    }

};