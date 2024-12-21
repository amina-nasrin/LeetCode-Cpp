class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0, xcopy=x;
        if(x<0)
            return 0;
        else{    
            while(x > 0){
                if (reverse > (INT_MAX / 10) || (reverse == INT_MAX / 10 && (x % 10) > 7))
                    return false;
                reverse = (reverse*10) + (x%10);
                x = x/10;
            }
            return reverse == xcopy;
        }
    }
};
