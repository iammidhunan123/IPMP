class Solution {
  public:
     vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        vector<int> ans;
        int i = 0, j = 0;

        while (i < n && j < m) 
        {

            if (a[i] < b[j]) 
            {
                if (ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);
                i++;
            }
            else if (a[i] > b[j]) 
            {
                if (ans.empty() || ans.back() != b[j])
                    ans.push_back(b[j]);
                j++;
            }
            else 
            { 
                if (ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        while (i < n) 
        {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        while (j < m) 
        {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n=arr1.size();
        int m=arr2.size();
        vector<int> ans;
        int i = 0, j = 0;

        while (i < n && j < m) 
        {
            if (arr1[i] < arr2[j]) 
            {
                i++;
            } else if (arr1[i] > arr2[j]) 
            {
                j++;
            } else 
            {
                if (ans.empty() || ans.back() != arr1[i])
                    ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return ans;
        
    }
   
};
