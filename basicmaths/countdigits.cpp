//leetcode problem : 2520. Count the Digits That Divide a Number

class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        for (int i=num;i>0;i= i/10){
            int digit = i % 10;
            if(digit!=0 && num % digit == 0){
                count ++;
            }
        }
        return count;
    }
};

