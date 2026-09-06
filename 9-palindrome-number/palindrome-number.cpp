class Solution {
public:
    bool isPalindrome(int x) {
        int remainder;
        long long reverse=0;
        int original= x;
        while(x>0){
            remainder=x%10;
            reverse=reverse*10+remainder;
            x=x/10;
        }
        while(x<0){
            return false;
        }
        if(original==reverse){
            return true;
        }
        else{
            return false;
        }

        
    }
};