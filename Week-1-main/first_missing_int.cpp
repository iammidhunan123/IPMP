int Solution::firstMissingPositive(vector<int> &A) {
    
    int n=A.size();
    int i=0;
    while(i<n)
    {
        int index=A[i]-1;
        if(A[i]>0 && A[i]<=n && A[i]!=A[index])
        {
            swap(A[i],A[index]);
        }
        else
        {
            i++;
        }
    }
    int ans=n+1;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=i+1)
        {
            ans=i+1;
            break;
        }
    }
    return ans;
}
