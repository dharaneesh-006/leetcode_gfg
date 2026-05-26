class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int> arr(n+1);

        arr[0] = 1;
        arr[1] = 1;

        for(int i = 2 ; i <= n ; i++)
        {
            int op1 = arr[i-1] + cost[i-1];
            int op2 = arr[i-2] + cost[i-2];
            arr[i] = min(op1,op2);
        }

        return arr[n]-1;

    }
};