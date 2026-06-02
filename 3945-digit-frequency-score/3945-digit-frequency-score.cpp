class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> mp;

        while(n != 0)
        {
            mp[n%10]++;
            n = n/10;
        }

        int sum = 0;

        for(auto a : mp)
        {
            sum += a.first * a.second;
        }
        return sum;
    }
};