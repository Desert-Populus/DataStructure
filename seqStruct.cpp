#include<stdio.h>
#define Maxsize 50
typedef int ElemType;
//define
typedef struct {
    ElemType data[Maxsize];
    int length;
}SqList;
//
void InitList(SqList&L){
    for(int i=0;i<Maxsize;i++){
        L.data[i]=0;
    }
    L.length=0;
}
void DestroyList(SqList &L){

}
bool ListInsert(SqList &L,int i,ElemType e){
    if(i<1||i>L.length+1){
        printf("the place is illeal");
        return false;
    }
    if(L.length>=Maxsize){
        printf("the area is over ");
        return false;
    }
    for(int j=L.length;j>=i;j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return true;
}
bool ListDelete(SqList &L,int k,ElemType &e){
    if(k<1||k>L.length+1){
        printf("the place is illeal");
        return false;
    }
    e=L.data[k-1];
    for(int i=k;i<L.length;i++){
        L.data[i-1]=L.data[i];
    }
    L.length--;
    return true;
}

int main(){
    SqList L;
    InitList(L);
    ListInsert(L,1,1);
    ListInsert(L,1,4);
    for(int i=0;i<L.length;i++){
        printf("data[%d]=%d\n",i,L.data[i]);
    }
    return 0;
}
