class Solution {
public:

    int des;
    vector<bool> visi;
    bool fid = false;


    void dfs(int node,vector<int> arr[])
    {
        visi[node] = true;
        for(int nei : arr[node])
        {
            if(nei == des)
            {
                fid = true;
            }
            if(!visi[nei])
            {
                dfs(nei,arr);
            }
        }

    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> arr[n];
        visi.resize(n,false);
        des = destination;

        if(n == 1 ) return true;;
        for(auto a : edges)
        {
            arr[a[0]].push_back(a[1]);
            arr[a[1]].push_back(a[0]);
        }

        dfs(source,arr);

        return fid;
        
    }
};