//leetcode- 258
//https://leetcode.com/problems/add-digits/


/* class Solution {
public:
    int addDigits(int num) {
        

      while(num>9) 
       { 
        int rem,ans=0;
        while(num!=0)
        {
           rem=num%10;
           num=num/10;
           ans=rem+ans;
        }
        num=ans;
      }
      return num;
    }
}; */