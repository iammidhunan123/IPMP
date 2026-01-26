class Solution {
  public:
    int closestToZero(int arr[], int n) {
        // your code here
       sort(arr,arr+n);
       int close=INT_MAX;
       int i=0;
       int j=n-1;
       int result=0;
       while(i<j)
       {
           int sum=arr[i]+arr[j];
           if(abs(sum)<close||(abs(sum)==close&&sum>result))
           {
               close=abs(sum);
               result=sum;
           }
           if(sum<0)
           {
               i++;
           }
           else
           {
               j--;
           }
       }
       return result;
    }
};
