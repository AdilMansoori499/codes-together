class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
         int count=0;
         int orginal_n=n;
    while(n>0)
    {
        int lastdigit;
        lastdigit = n%10;
        if(lastdigit!=0 && orginal_n%lastdigit==0)
        {
        count=count+1;
        }
        n=n/10;
        

    }
    return count;
        // code here
        
    }
};