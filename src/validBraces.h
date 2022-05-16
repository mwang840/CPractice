#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int pop(struct braceNode *node);
void push(struct braceNode *node, int information);
struct braceNode *createStack(unsigned capacity);
int isFull(struct braceNode *node);
int isEmpty(struct braceNode *node);
