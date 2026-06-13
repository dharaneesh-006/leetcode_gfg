class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum = 0;
        vector<int> val;

        for(string s : bank)
        {
            int cnt = 0;
            for(char a : s)
            {
                if(a == '1')
                {
                    cnt++;
                }
            }
            if(cnt == 0) continue;
            val.push_back(cnt);
        }

        int i = 0, j = 1;

        int n = val.size();
        while(i < n && j < n )
        {
            sum += val[i]*val[j];
            i++;
            j++;
        }

        return sum;
    }
};