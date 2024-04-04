// leetcode 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0;
        int realnumber = x;
        if(x<0){
            return false;
        }

        while(x!=0){
            if(ans>INT_MAX/10 || ans<INT_MIN/10) return false;
            ans=ans*10+x%10;
            x=x/10;
        }
        cout << ans;
        if(realnumber==ans){
            return true;
        }
        
            return false;
        

        
    }
};