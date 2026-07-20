class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        int m = arr[0].size();

        vector<vector<int>> arr1(n,vector<int>(m));

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                int idx = i * m + j;
                int idx1 = (idx + k) % (n*m);

                arr1[idx1/m][idx1%m] = arr[i][j];

            }
        }
        return arr1;

    }
};