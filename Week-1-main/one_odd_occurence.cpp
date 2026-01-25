class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int res = 0;
        for (int x : arr) {
            res^= x;
        }
        return res;
    }
};
