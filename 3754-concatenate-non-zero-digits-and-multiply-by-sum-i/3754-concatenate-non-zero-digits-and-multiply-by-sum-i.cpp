class Solution {
public:
    long long sumAndMultiply(int n) {

        if(n == 0) return 0;

        string s = to_string(n);
        string a = "";
        long long sum = 0;
        for(char c : s)
        {
            if(c != '0')
            {
                a += c;
                sum += c - '0';
            }
        }

        long long val = stoll(a);

        return val*sum;



    }
};