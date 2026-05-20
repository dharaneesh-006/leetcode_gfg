class Solution {
public:

    int primesum(int i,int j)
    {
        vector<bool> prime(j+1,true);
        prime[0] = prime[1] = false;
        for(int k = 2 ; k * k <= j ; k++ )
        {
            if(prime[k])
            {
                for(int l = k * k ; l <= j ; l += k)
                {
                    prime[l] = false;
                }
            }
        }
        
        int sum = 0;

        for(int k = i ; k <= j ; k++ )
        {
            if(prime[k])
            {
                sum += k;
            }
        }
        return sum;


    }

    int sumOfPrimesInRange(int n) {
        string s = to_string(n);
        if(n <= 1) return 0;
        reverse(s.begin(),s.end());
        int n1 = stoi(s);

        return primesum(min(n,n1),max(n,n1));
        
    }
};