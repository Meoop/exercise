/*********************************************************
	Trie 树的简单应用
**********************************************************/
#include<stdio.h>
#include<stdlib.h>

typedef struct treenode{
    char letter ;
    int t  ;
    struct treenode *nextbrother ;
    struct treenode *child ;
} *Tree,*TreeNode;

TreeNode getNewTreeNode(char letter,int t,TreeNode nextbrother){
    TreeNode newTreeNode = (TreeNode)malloc(sizeof(struct treenode)) ;
    newTreeNode->letter = letter ;
    newTreeNode->t = t ;
    newTreeNode->nextbrother = nextbrother ;
    newTreeNode->child = NULL ;
    return newTreeNode ;
}

void insertTree(Tree t,char *str){
    TreeNode cNode = NULL ;
    TreeNode newTreeNode = NULL ;
    int is = 0 ;
    if(*str=='\0') return ;
    else if(t->child==NULL){
        newTreeNode = getNewTreeNode(str[0],1,NULL) ;
        t->child = newTreeNode ;
        insertTree(newTreeNode,str+1) ;
    }else{
        cNode = t->child ;
        while(cNode!=NULL){
            if(cNode->letter==str[0]){  //已经在树中
                cNode->t = cNode->t+1 ;
                insertTree(cNode,str+1) ;
                is = 1 ;
                break ;
            }
            cNode = cNode->nextbrother ;
        }
        if(is==0){ //插入新节点
            newTreeNode = getNewTreeNode(str[0],1,NULL) ;
            newTreeNode->nextbrother = t->child ;
            t->child = newTreeNode ;
            insertTree(newTreeNode,str+1) ;
        }

    }
}

int numOfWord(Tree t,char *tstr){
    TreeNode cNode = t->child ;
    int p = 0 ;
    if(tstr[0]=='\0') return t->t ;
    else{
        while(cNode!=NULL){
            if(cNode->letter==tstr[0]){
                p = 1 ;
                return numOfWord(cNode,tstr+1) ;
            }
            cNode = cNode->nextbrother ;
        }
        if(p==0) return 0 ;
    }
}

int main(){
    int n = 0 ;
    int m = 0 ;
    int i = 0 ;  //用于计数
    int numword[100] = {0} ;
    char str[100] ;  //输入字符串
    char *s ;
    char tstr[100] ;  //测试字符串
    TreeNode Tree = (TreeNode)malloc(sizeof(struct treenode)) ;
    Tree->letter = '0' ;
    Tree->t = 0 ;
    Tree->nextbrother = NULL ;
    Tree->child = NULL ;
    while(scanf("%d", &n) != EOF) {
    	for(i=0;i<n;i++){
            scanf("%s",str) ;
            s = str ;
            insertTree(Tree,s) ;
    	}
    	scanf("%d",&m) ;
        for(i=0;i<m;i++){
            scanf("%s",tstr) ;
            s = tstr ;
            numword[i] = numOfWord(Tree,s) ;
    	}
    	for(i=0;i<m;i++){
            printf("%d\n",numword[i]) ;
    	}

    }
    return 0 ;
}
