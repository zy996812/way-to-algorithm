#pragma once
#ifndef MAX
#define MAX 1024
#endif

struct BiNode {
  int index;
  int value;
  BiNode *left;
  BiNode *right;
};

BiNode *MaximumBinaryTreeNew(int *value, int *left, int *right, int n);

void MaximumBinaryTreeFree(BiNode *t);

int MaximumBinaryTree(BiNode *t, int n, int m);

