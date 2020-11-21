#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char ElemType;
typedef struct _bitree{
    ElemType data;
    struct _bitree* lchild;
    struct _bitree* rchild;
}BitNode;

BitNode* Create()
{
    BitNode* t = nullptr;
    ElemType e;

    printf("Enter data(# for no data.)\n");
    scanf("%c", &e);
    if(e == '#')
    return t;
    t = (BitNode*)malloc(sizeof(BitNode));
    t -> data = e;

    printf("Enter left child of %c.\n", t -> data);
    t -> lchild = Pre_Create();

    printf("Enter right child of %c.\n", t -> data);
    t -> rchild =  Pre_Create();

    return t;
}

void PreOrder(BitNode* root)
{
    if(root != nullptr)
    {
        printf("%c\t", root -> data);
        PreOrder(root -> lchild);
        PreOrder(root -> rchild);
    }
}

int main()
{
    BitNode* r = nullptr;
    r = Pre_Create();
    PreOrder(r);

    return 0;
}
