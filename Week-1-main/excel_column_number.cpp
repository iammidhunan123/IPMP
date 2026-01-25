class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int val=columnTitle[i]-'A'+1;
            int power=n-i-1;
            ans=ans+val*pow(26,power);
        }
        return ans;
        
    }
};
