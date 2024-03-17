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
	
	/*L->data=0;//头结点的data域用来储存表长 
	L->next=NULL; //头结点的next域用来指向链表的第一个结点 */
}

LNode *InitLinkList_1()
{
	/*LNode  *L=(LNode*)malloc(sizeof(LNode));
	L->data=0;//头结点的data域用来储存表长 
	L->next=NULL; //头结点的next域用来指向链表的第一个结点 
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
	LinkList L;//L是一个指针
    L=InitLinkList_1();

	printf("%d",L->data);
	return 0;
}*/
