#include <stdio.h>
#include <stdlib.h>

#define bool char
#define true 1
#define false 0

typedef int ElemType;
typedef struct LNode
{
	/*ElemType data;
	struct LNode* next;
}LNode,*LinkList;*/


bool InitLinkList(LinkList L)
{
	
	/*L->data=0;//ͷ����data����������� 
	L->next=NULL; //ͷ����next������ָ������ĵ�һ����� */
}

LNode *InitLinkList_1()
{
	/*LNode  *L=(LNode*)malloc(sizeof(LNode));
	L->data=0;//ͷ����data����������� 
	L->next=NULL; //ͷ����next������ָ������ĵ�һ����� 
	return L;*/
}

bool PrintLinkList(LinkList L)
{
	/*LNode *p;
	p=L;
	while(p->next)
	{
		p=p->next;
		printf("%d-->",p->data);
	}
	printf("NULL\n");
	return true;*/
}
/*int main()
{
	LinkList L;//L��һ��ָ��
    L=InitLinkList_1();

	printf("%d",L->data);
	return 0;
}*/
