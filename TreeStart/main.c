#include"TreeStart.h"

int main(void)
{
	BinTreeNode *head = BinTreeInit();
	BinTreePrint0(head, head);
	putchar('\n');
	BinTreePrint1(head, head);
	putchar('\n');
	BinTreePrint2(head, head);
	putchar('\n');
	system("pause");
	ChildReverse(&head);
	BinTreePrint2(head, head);
	putchar('\n');
	system("pause");
	return 0;
}