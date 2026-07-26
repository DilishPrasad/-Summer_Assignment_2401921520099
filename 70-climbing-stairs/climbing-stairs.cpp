class Solution {
public:
    int climbStairs(int n) {
        int a=0,b=1,i,temp;
        for(i=1;i<=n;i++)
        {
            temp=a+b;
            a=b;
            b=temp;
        }
        return temp;
        
    }
};