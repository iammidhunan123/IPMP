class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> prefix;
        prefix[0]=1;
        int count=0;
        int sum=0;
        for(int x:nums)
        {
            sum+=(x%2);
            int rem=sum-k;
            count+=prefix[rem];
            prefix[sum]++;
        }
        return count;
    }
};
