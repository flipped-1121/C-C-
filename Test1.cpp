#include<stdio.h>
#include<iostream.h>
#include<malloc.h>
#include<conio.h>
#define MAXSIZE 32 
#define OK 1
#define ERROR 0


typedef int ElemType;

typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}Sqlist;

//初始化顺序表
int InitList_Sq(Sqlist &L){
	L.elem = new.ElemType[MAXSIZE];
	if(!L.elem) 
		return 0;
	L.length = 0;
	L.listsize = MAXSIZE;
	return OK;
}

//定位元素
int Location_Sq(SqList L, ElemType e){
	
}

//插入元素
int ListInsert_Sq(SqList &L, int loc, ElemType e){
	if(L->MAXSIZE >= l->size)
		return ERROE;
	if(loc < 1 || loc > link->MAXSIZE + 1)
		return error;
	for(int i= L->MAXSIZE; i >= loc; i--)
	L->
}

//删除元素
int ListDelete_Sq(SqList &L, int i, ElemType e){
	
}


void main(){
	
}