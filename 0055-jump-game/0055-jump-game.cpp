class Solution {
public:
    bool canJump(vector<int>& nums) {
        int met = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i > met) return false;
            met = max(met, i + nums[i]);
        }
        return true;
    }
};