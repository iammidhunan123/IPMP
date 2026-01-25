class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res="";
        int num=columnNumber;
        while(num>0)
        {
            num=num-1;
            int rem=num%26;
            char c=str[rem];
            res=c+res;
            num=num/26;
        }
        return res;
    }
};
