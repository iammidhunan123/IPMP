class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        vector<int> even, odd;
        for (int x : arr) 
        {
            if (x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int i = 0;
        for (int x:even) arr[i++] = x;
        for (int x:odd) arr[i++] = x;
        
    }
};
