int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int count1=0;
    int count2=0;
    int ele1=-1,ele2=-1;
    for(int i=0;i<n;i++)
    {
        if(count1==0 && A[i]!=ele2)
        {
            count1++;
            ele1=A[i];
        }
        else if(count2==0 && A[i]!=ele1)
        {
            count2++;
            ele2=A[i];
        }
        else if(A[i]==ele1)
        {
            count1++;
        }
        else if(A[i]==ele2)
        {
            count2++;
        }
        else {
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==ele1) count1++;
        if(A[i]==ele2) count2++;
    }
    int min=(int)(n/3)+1;
   if(count1>=min) return ele1;
   if(count2>=min) return ele2;
   return -1;
}
