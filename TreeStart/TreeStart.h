#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef char TElemType;

typedef struct BinTreeNode{
	TElemType data;
	struct BinTreeNode *Parent;
	struct BinTreeNode *LChild;
	struct BinTreeNode *RChild;
}BinTreeNode;

void wipe_cache(FILE *fp);
BinTreeNode* BinTreeInit(void);
int BinTreeBuild(BinTreeNode **ptr, TElemType input);
void BinTreePrint(BinTreeNode *p, BinTreeNode *head);