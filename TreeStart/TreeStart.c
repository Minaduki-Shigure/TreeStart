#include"TreeStart.h"

void wipe_cache(FILE *fp)
{
	int ch;
	while ((ch = fgetc(fp)) != EOF && ch != '\n');
}

BinTreeNode* BinTreeInit(void)
{
	puts("Init Start!");
	BinTreeNode *head = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	BinTreeNode *p1;
	TElemType input;
	int status = -1;
	head->data = 0;
	head->Parent = NULL;
	head->LChild = NULL;
	head->RChild = NULL;
	p1 = head;
	input = getche();
	//wipe_cache(stdin);
	while (1)
	{
		status = BinTreeBuild(p1, input);
		if (p1 == head && head->RChild != NULL)
			break;
		else if (status == 1)
			p1 = p1->Parent;
		else if (status == 2)
		{
			p1 = p1->LChild;
			input = getche();
		}
		else if (status == 3)
		{
			p1 = p1->RChild;
			input = getche();
		}
		else if (status == 4)
		{
			//p1 = p1->Parent;
			input = getche();
		}
	}
	puts("\nInit Successful!");
	return head;
}

int BinTreeBuild(BinTreeNode *p1, TElemType input)
{
	BinTreeNode *p = NULL;
	int flag = 0;
	if (input == '*')
	{
		flag = 1;
	}
	if (p1->LChild == NULL)
	{
		p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		p1->LChild = p;
		p->data = input;
		p->Parent = p1;
		p->LChild = NULL;
		p->RChild = NULL;
		if (flag)
			return 4;
		else
			return 2;
	}
	else if (p1->RChild == NULL)
	{
		p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		p1->RChild = p;
		p->data = input;
		p->Parent = p1;
		p->LChild = NULL;
		p->RChild = NULL;
		if (flag)
			return 4;
		else
			return 3;
	}
	else
	{
		p1 = p1->Parent;
		return 1;
	}
}

void BinTreePrint0(BinTreeNode *p,BinTreeNode *head)
{
	if (p)
	{
		if (p != head && p->data != '*')
			putchar(p->data);
		if (p->LChild)
			BinTreePrint0(p->LChild, head);
		if (p->RChild)
			BinTreePrint0(p->RChild, head);
	}
	return;
}

void BinTreePrint1(BinTreeNode *p, BinTreeNode *head)
{
	if (p)
	{
		if (p->LChild)
			BinTreePrint1(p->LChild, head);
		if (p != head && p->data != '*')
			putchar(p->data);
		if (p->RChild)
			BinTreePrint1(p->RChild, head);
	}
	return;
}

void BinTreePrint2(BinTreeNode *p, BinTreeNode *head)
{
	if (p)
	{

		if (p->LChild)
			BinTreePrint2(p->LChild, head);
		if (p->RChild)
			BinTreePrint2(p->RChild, head);
		if (p != head && p->data != '*')
			putchar(p->data);
	}
	return;
}