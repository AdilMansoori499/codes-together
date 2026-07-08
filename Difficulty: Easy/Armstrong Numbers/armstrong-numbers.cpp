class Solution {
public:
    bool armstrongNumber(int x) {
       int orginalno=x;
        int sum=0;
        while(x!=0)
        {
            int lastdigit=x%10;
            x=x/10;
            sum=sum+(lastdigit*lastdigit*lastdigit);


        }
        if(sum==orginalno)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};