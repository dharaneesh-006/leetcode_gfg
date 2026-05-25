class Solution {
public:
    string convert(string s, int rows) {
        vector<vector<char>> arr(rows);
        
        if(rows == 1 || s.length() <= rows) return s;

        int d=1,idx = 0;
        for(char a : s)
        {
            arr[idx].push_back(a);
            if(idx == 0)
            {
                d = 1;
            }
            if(idx == rows - 1)
            {
                d = -1;
            }

            idx += d;
        }

        string res = "";

        for(auto a : arr)
        {
            for(char c : a)
            {
                res += c;
            }
        }
        return res;
    }
};