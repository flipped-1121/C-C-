/*
 * @Author: Kang
 * @Date: 2020-10-31 01:15:40
 * @LastEditTime: 2020-10-31 01:33:37
 * @FilePath: \C\C01\Test3.cpp
 */
#include <iostream>
#define ERROR 0
#define OK 1
#define STACKINCREMENT 10
using namespace std;

#define MAXSIZE 100

typedef int ElemType;

typedef struct STACK
{
    ElemType *base;
    ElemType *top;
    int stacksize;
} SqStack;

//函数声明
int InitStack(SqStack &s);
void ClearStack(SqStack &S);
int StackEmpty(SqStack S);
int StackLength(SqStack S);
int GetTop(SqStack s, ElemType &e);
int Push(SqStack &s, ElemType e);
int Pop(SqStack &s, ElemType &e);

//初始化
int InitStack(SqStack &s)
{ //创建空栈
    s.base = new ElemType[MAXSIZE];
    if (!s.base)
        return 0;
    s.top = s.base; //空栈
    s.stacksize = MAXSIZE;
    return 1;
}

//清空栈
void ClearStack(SqStack &S)
{
    S.top = S.base;
}

//判栈空
int StackEmpty(SqStack S)
{
    if (S.top == S.base)
        return 1;
    else
        return 0;
}

//求栈中元素个数
int StackLength(SqStack S)
{
    return S.top - S.base;
}

//获取栈顶元素值
int GetTop(SqStack s, ElemType &e)
//取栈顶元素
{
    if (s.top == s.base)
        return ERROR;
    e = *(s.top - 1);
    return OK;
}

//入栈
int Push(SqStack &s, ElemType e)
{
    if (s.top - s.base >= s.stacksize)
    {
        s.base = (ElemType *)realloc(s.base, (s.stacksize + STACKINCREMENT) * sizeof(ElemType));
        s.top = s.base + s.stacksize;
        s.stacksize += STACKINCREMENT;
    }
    *s.top = e; //新元素放入当前栈顶
    s.top++;    //栈顶(指针)+1
    return OK;
}

//出栈
int Pop(SqStack &s, ElemType &e)
{
    if (s.top == s.base)
        return ERROR; //栈空
    s.top--;          //栈顶(指针)－1
    e = *s.top;
    return OK;
}

//打印栈中元素
void PrintElem(SqStack S)
{
    ElemType *p = S.base;
    while (p < S.top)
    {
        cout << *p << ends;
        p++;
    }
    cout << endl;
}

//数制转换函数
void conversion()
{
}

//主函数
int main()
{
    ElemType e;
    SqStack S;
    cout << "   1 初始化栈\n";
    InitStack(S);
    cout << "现在栈为空.\n";
    cout << "请输入第一个要入栈的元素值：";
    cin >> e;
    Push(S, e);
    cout << "现在栈中有一个元素：";
    PrintElem(S);
    cout << "\n请输入第二个要入栈的元素值：";
    cin >> e;
    Push(S, e);
    cout << "现在栈中有两个元素：";
    PrintElem(S);
    int n;
    cout << "\n请输入还要入栈的元素个数:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "请输入第" << i + 2 << "个元素：";
        cin >> e;
        Push(S, e);
    }
    cout << "现在栈中元素有：" << StackLength(S) << "个。" << endl;
    cout << "现在栈中元素为：";
    PrintElem(S);

    cout << "\n   2 现在出栈\n出栈前栈顶元素为：";
    Pop(S, e);
    cout << e << endl;
    GetTop(S, e);
    cout << "出栈后新的栈顶元素为：" << e << endl;
    cout << "栈中剩余元素有：";
    PrintElem(S);
    cout << "现在栈中元素个数为：" << StackLength(S);
    cout << endl;

    cout << "\n   3 数制转换" << endl;
    conversion();
}
