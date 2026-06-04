class Solution {
public:

    int solve(int x)
    {
        string a = to_string(x);
        int cnt = 0;
        for(int i = 1 ; i < a.length() - 1 ; i++ )
        {
            if((a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1]) )
                cnt++;
        }
        return cnt;
    }

    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1 ; i <= num2 ; i++)
        {
            ans += solve(i);
        }
        return ans;
    }
};