class Solution {
public:
    bool isPalindrome(int x) {
        double a,b=0;
        int y=x;
        while(y>0)
        {
            a=y%10;
            b=b*10+a;
            y=y/10;

        }
        if(x==b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
