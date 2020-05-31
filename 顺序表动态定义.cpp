#include<stdio.h>
#include<stdlib.h>
#define Initsize 10
typedef int ElemType;
typedef struct{
    ElemType *data;
    int MaxSize;
    int length;
}SqList;
void InitList(SqList &L){
    L.data=(ElemType*)malloc(Initsize*sizeof(ElemType));
    L.length=0;
    L.MaxSize=Initsize;
}
void IncreaseSize(SqList &L,int len){
    ElemType *p=L.data;
    L.data=(ElemType*)malloc((Initsize+len)*sizeof(ElemType));
    for(int i=0;i<L.length;i++){
        L.data[i]=p[i];
    }
    L.MaxSize=L.MaxSize+len;
    free(p);
}
int main(){
    SqList L;
    return 0;
}
