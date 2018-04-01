#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ViolentMatch(char *s,char *p){
    int sLen = strlen(s) ;
    int pLen = strlen(p) ;
    int i,j ;
    i = j = 0;
    while(i<sLen&&j<pLen){
        if(s[i]==p[j]){
            i++ ;
            j++ ;
        }else{
            i = i-j+1 ;
            j = 0 ;
        }
    }
    if(j==pLen) return i-j+1 ;
    return 0 ;
}

int main(){
    char s[20],p[20] ;
    while(scanf("%s",s)!=EOF){
        scanf("%s",p) ;
        printf("%d\n",ViolentMatch(s,p)) ;
    }
    return 0 ;
}
