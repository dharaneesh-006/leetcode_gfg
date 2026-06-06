class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ls(n),rs(n);
        // ls[0] = 0;
        // rs[n-1] = 0;
        if(n == 1) return {0};

        int i = 0 , j = n-1;

        ls[0] = 0;
        rs[n-1] = 0;

        i = 1;
        j = n - 2;

        while(i < n && j >= 0)
        {
            ls[i] = ls[i-1] + nums[i-1];   
            rs[j] = rs[j+1] + nums[j+1];   

            i++;
            j--;
        }

        vector<int> res(n);

        for(int i = 0 ; i < n ; i++)
        {
            res[i] = abs(ls[i] - rs[i]);
        }
        return res;

    }
};