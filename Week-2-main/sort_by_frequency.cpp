class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        unordered_map<int,int> freq;
        for(int x:arr)
        {
            freq[x]++;
        }
        vector<vector<int>> b(n+1);
        for(auto &it:freq)
        {
            b[it.second].push_back(it.first);
        }
        vector<int> res;
        for(int i=n;i>=1;i--)
        {
            if(b[i].empty()) continue;
            sort(b[i].begin(), b[i].end());
            for(int x:b[i])
            {
                for(int j=0;j<i;j++)
                {
                   res.push_back(x); 
                }
            }
        }
        return res;
    }
};
