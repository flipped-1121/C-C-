#include<stdio.h>
#include<iostream.h>
typedef int ElemType;

struct LNode{
	ElemType data;
	struct LNode *next;
};
typedef struct LNode LNode;
typedef struct LNode *LinkList;

//求表长
int ListLength(LinkList L){
	
}

//查找元素，获取表中第i个元素的值
int GetElem(LinkList L, int i, ElemType &e){
	
}

//插入操作
int ListInsert(LinkList &L, int i, ElemType &e){
	
}

//删除操作
int ListDelete(LinkList &L, int i, ElemType &e){
	
}

//头插法建表
int CreatList(LinkList &L, int n){
	
}