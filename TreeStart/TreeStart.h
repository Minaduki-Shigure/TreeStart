#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef char TElemType;

typedef struct BinTreeNode{
	TElemType data;
	BinTreeNode *Parent;
	BinTreeNode *LChild;
	BinTreeNode *RChild;
}BinTreeNode;

BinTreeNode* BinTreeInit(void);
int BinTreeBuild(BinTreeNode *p1, TElemType input);