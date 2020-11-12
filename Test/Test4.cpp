/*
 * @Author: Kang
 * @Date: 2020-10-31 01:39:23
 * @LastEditTime: 2020-10-31 01:51:54
 * @FilePath: \C\C01\Test4.cpp
 */
#include <iostream>
#define MAXSIZE 100 /*最大队列长度*/
#define ERROR 0
#define OK 1
typedef int QElemType;
using namespace std;

typedef struct
{
    QElemType *base; /*初始化的动态分配存储空间*/
    int front;       /*头指针，若队列不空，指向队列头元素*/
    int rear;        /*尾指针，若队列不空，指向队列尾元素的下一位置*/
} SqQueue;

/*构造一个空队列Q*/
int InitQueue(SqQueue *Q)
{
    Q->base = new QElemType[MAXSIZE];
    if (!Q->base)
        return 0;
    Q->front = Q->rear = 0;
    return 1;
}

/*队列判空，若队列Q为空队列，则返回1，否则返回0*/
int QueueEmpty(SqQueue *Q)
{
}

/*求队列的长度*/
int QueueLength(SqQueue Q)
{
}

/*求队头元素值，若队列不为空，则用e返回Q的队头元素，并返回1；否则返回0*/
int GetHead(SqQueue Q, QElemType &e)
{
}

int EnQueue(SqQueue &Q, QElemType e)
{ /*插入元素e作为Q的新的队尾元素*/
    QueuePtr p;
    p = (QueuePtr)malloc(sizeof(QNode));
    p->data = e;
    p->next = NULL;
    Q.rear->next = p;
    Q.rear = p;
    return OK;
}

int DeQueue(SqQueue *Q, QElemType &e)
{
    /*若队列不空，则删除Q的队头元素，用e返回其值，并返回1,否则返回0*/
    QueuePtr p;
    if (Q->front == Q->rear)
        return ERROR;  //队空判断
    p = Q.front->next; //取出队头元素值
    e = p->data;
    Q.front->next = p->next;
    if (p->next = = NULL)
        Q->rear = Q->front;
    free(p);
    return OK;
}

//输出队列中元素值
void PrintQueue(SqQueue *Q)
{
    while(Q->front!=Q->rear){
        printf("%4d",Q->data[Q->front++]);
    }
    printf("\n");
}

//主函数
int main()
{
    SqQueue Q;
    int select;
    QElemType e;
    if ((InitQueue(&Q)) == 0)
        cout << "分配失败，即将退出程序！\n";
    else /*否则显示队列操作的菜单，并选择相应的基本操作*/
        do
        {
            cout << "1：判断队列是否为空\n";
            cout << "2：测试队列的长度\n";
            cout << "3：取队头元素值\n";
            cout << "4：向队列中插入一新元素\n";
            cout << "5：删除队列中一元素\n";
            cout << "6: 显示队列中所有元素\n";
            cout << "0：结束\n";
            cout << "\n请输入您的选择：";
            cin >> select;
            cout << endl;
            switch (select)
            {
            case 1:
                if (QueueEmpty(&Q) == 1)
                    cout << "队列为空\n";
                else
                    cout << "队列不为空\n";
                break;
            case 2:
                cout << "队列长度为：" << QueueLength(Q) << endl;
                break;
            case 3:
                if (GetHead(Q, e) == 0)
                    cout << "队列为空\n";
                else
                    cout << "队首元素为：" << e << endl;
                break;
            case 4:
                cout << "请输入要插入的元素值：";
                cin >> e;
                if (EnQueue(Q, e) == 0)
                    cout << "\n队列满\n";
                else
                    cout << "\n元素成功插入\n";
                break;
            case 5:
                if (DeQueue(&Q, e) == 0)
                    cout << "队列空,无数据可删\n";
                else
                    cout << "删除元素为：" << e;
                break;
            case 6:
                PrintQueue(&Q);
                break;
            case 0:
                cout << "操作结束\n";
                break;
            default:
                cout << "输入选择出错！\n";
            } /*switch*/
            cout << endl;
        } while (select);
} /*main_end*/
