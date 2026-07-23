class Solution {
  public:
    bool isPalindrome(string& s) {
        int n=s.size();
        palindrome(0,n-1,s);

    }
   bool palindrome(int l,int r,string &s)
    {
        if(l>=r)
        return true;
        if(s[l]!=s[r])
        return false;
        return palindrome(l+1,r-1,s);
    }
};