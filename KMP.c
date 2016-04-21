/*******************************************
    hihoCoder 1015 http://hihocoder.com/problemset/problem/1015
    KMP模式匹配算法
    测试样例通过，hiho一直Runtime Error
********************************************/
#include<stdio.h>
#include<string.h>
int next[10001] ;

void getNext(char *p){
    int pLen = strlen(p) ;
    int i=-1,j=0 ;
    next[0] = -1 ;
    while(j<pLen){
        if(p[i]==p[j]||i==-1){
            ++i ;
            ++j ;
            if(j==pLen||p[i]!=p[j])
            next[j] = i ;
        }else{
            i = next[i] ;
        }
    }
}

int KMP(char *s,char *p){
    int sLen = strlen(s) ;
    int pLen = strlen(p) ;
    int num = 0 ;
    int i=0,j=0 ; //i表示在s串中的下标，j表示在p串中的下标
    getNext(p) ;  //求next数组
    while(i<sLen){
        if(s[i]==p[j]||j==-1){
            ++i ;
            ++j ;
        }else if(j<pLen){
            j = next[j] ;
        }
        if(j==pLen){
            num++ ;
            j = next[pLen] ;
        }
    }
    return num ;
}

int main(){
    int n = 0 ;
    char s[10001] ;
    char p[1001] ;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%s",p) ;
            scanf("%s",s) ;
            printf("%d\n",KMP(s,p)) ;
        }
    }
    return 0 ;
}
