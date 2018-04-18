#include"TreeStart.h"

BinTreeNode* BinTreeInit(void)
{
	puts("Init Start!");
	BinTreeNode *head = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	BinTreeNode *p1;
	TElemType input;
	int status = -1;
	p1 = head;
	head->data = 0;
	head->Parent = NULL;
	input = getch();
	while (1)
	{
		status = BinTreeBuild(p1, input);
		if (status)
			continue;
		else if (p1 == head && head->RChild != NULL)
			break;
		else
			input = getch();
	}
	puts("Init Successful!");
	return head;
}

int BinTreeBuild(BinTreeNode *p1, TElemType input)
{
	BinTreeNode *p = NULL;
	if (p1->LChild == NULL)
	{
		p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		p1->LChild = p;
		p->data = input;
		p->Parent = p1;
		p->LChild = NULL;
		p->RChild = NULL;
		p1 = p;
		return 0;
	}
	else if (p1->RChild == NULL)
	{
		p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		p1->RChild = p;
		p->data = input;
		p->Parent = p1;
		p->LChild = NULL;
		p->RChild = NULL;
		p1 = p;
		return 0;
	}
	else
	{
		p1 = p1->Parent;
		return 1;
	}
	if (input == '*')
	{
		p1 = p1->Parent;
		return 0;
	}
}

void BinTreePrint(BinTreeNode *head)
{
	puts("Print Start!");

}