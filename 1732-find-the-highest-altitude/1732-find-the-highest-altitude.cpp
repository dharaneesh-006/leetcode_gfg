class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int n  = gain.size();
        vector<int> arr(n+1);

        arr[0] = 0;

        int i = 0, j = 1;

        while(i < n)
        {
            arr[j] = arr[j-1]+gain[i++];
            maxi = max(maxi,arr[j]);
            j++;
        }
        return maxi;

    }
};