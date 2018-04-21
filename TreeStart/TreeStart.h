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
int BinTreeBuild(BinTreeNode *p1, TElemType input);
void BinTreePrint0(BinTreeNode *p, BinTreeNode *head);
void BinTreePrint1(BinTreeNode *p, BinTreeNode *head);
void BinTreePrint2(BinTreeNode *p, BinTreeNode *head);
void swap(BinTreeNode **p1, BinTreeNode **p2);
void ChildReverse(BinTreeNode **T);