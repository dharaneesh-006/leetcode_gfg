class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int number = nums[i];
            if(mp.find(target - number) != mp.end()) 
                return {i,mp[target - number]};
            
            mp[number] = i;
        }
        return {};
    }
};