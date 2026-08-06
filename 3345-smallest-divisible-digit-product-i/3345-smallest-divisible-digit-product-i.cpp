class Solution {
public:
    int digiproduct(int n)
    {
        int num = 1;
        while(n != 0)
        {
            num *= n % 10;
            n /= 10;
        }
        return num;
    }
    int smallestNumber(int n, int t) {
        int i = 0;
        while(true)
        {
            if(digiproduct(n) % t == 0) return n;
            n++;
        }
        return 0;
    }
};