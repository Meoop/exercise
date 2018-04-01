/**
 * 括号匹配问题： 栈的应用
 */
bool isValid(char* s) {
    char stack[10000] = "";
    int top = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        switch(s[i]) {
            case '(':
            case '{':
            case '[':
                stack[top] = s[i];
                top++;
                break;
            case ')':
                if(top > 0 && stack[top-1] == '(') top--;
                else return false;
                break;
            case '}':
                if(top > 0 && stack[top-1] == '{') top--;
                else return false;
                break;
            case ']':
                if(top > 0 && stack[top-1] == '[') top--;
                else return false;
                break;
                
        }
    }
    return top == 0;
}

