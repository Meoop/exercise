/**
 * 9. Palindrome Number
 * https://leetcode.com/problems/palindrome-number/description/
 */
bool isPalindrome(int x) {
    long r = 0, tmp_x = x;
    if(tmp_x < 0) return false;
    do{
        r = r*10 + tmp_x%10;
        tmp_x = tmp_x/10;
    }while(tmp_x);
    return x == r ? true :false;
}
