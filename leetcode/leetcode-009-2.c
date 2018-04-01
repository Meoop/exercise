#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    int r = 0;
    if(x < 0 || (x != 0 && x%10 == 0)) return false;
    while(x > r) {
        r = r*10 + x%10;
        x = x/10;
    }
    return (x == r) || (x == r/10);
}

int main() {
    if(isPalindrome(123)) printf("true");
    else printf("false");
    return 0;
}
