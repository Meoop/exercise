#include<stdio.h>

int charToInt(char c) {
    switch(c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(char* s) {
    int cur = 0;
    int pre = 2000;
    int sum = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        cur = charToInt(s[i]);
        sum = sum + cur;
        printf("pre=%d, cur=%d, sum=%d\n", pre, cur, sum);
        if(pre < cur) {
            sum = sum - 2 * pre;
        }
        pre = cur;
    }
    return sum;
}

int  main() {
    printf("DCXXI is %d\n", romanToInt("DCXXI"));
}
