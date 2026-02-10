int Solution::threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    sort(A.begin(),A.end());
    int closest=A[0]+A[1]+A[2];
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int curr=A[i]+A[j]+A[k];
            if(abs(curr-B)<abs(B-closest))
            {
                closest=curr;
            }
            if(curr<B)
            {
                j++;
            }
            else if(curr>B)
            {
                k--;
            }
            else
            {
                return curr;
            }
        }
    }
    return closest;
    
}
