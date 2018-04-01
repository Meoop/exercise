char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j = 0;
    int lc = 0;
    if(strsSize == 0) return "";
    if(strsSize == 1) return strs[0];
    while(true) {
        if(strs[0][j] == '\0') break;
        for(i = 1; i < strsSize; i++) {
            if(strs[i][j] != strs[0][j]) break;
        }
        j++;
        if(i == strsSize) lc++;
        else break;
    }
    char *ret = (char *)malloc(sizeof(char)*(lc+1));
    memcpy(ret, strs[1], sizeof(char)*lc);
    ret[lc] = '\0';
    return ret;
}
