#include <stdbool.h>
#include <stdio.h>
#include "validBraces.h"
//might be done with a struct and helper functions
struct braceNode {
    char info;
    struct braceNode *next;
};
//Pops the node off the stack
int pop(struct braceNode *node);
void push(struct braceNode *node, int information);

//pushes the node onto the stack by first allocating the node in memory
void push(struct braceNode *node, int information){
    struct braceNode *newNode = (struct braceNode*)malloc(sizeof(newNode));
    //Checks to see if the node is null
    if(newNode == NULL){
        exit(0);
    }
    newNode->info = information;
    //sets the nodes next value
    newNode->next = node;
    node = newNode;
}

int pop(struct braceNode *node){
    char brace;
    struct braceNode *bracing;
    //retuns zero if the pointer is null
    if(bracing == NULL){
        return 0;
    }
    else{
        node = bracing;
        brace = bracing->info;
        node = bracing->next;
        free(bracing);
        return brace;
    }
}


//main function here
bool valid_braces (const char *braces)
{
    int size = 0;
    bool nikocadoAvocadoBrace = false;
    //Make sure the char is not a null terminator
    while (braces[size] != '\0'){
        if(braces[size] == '(' && braces[size+1] == ')'){
            nikocadoAvocadoBrace = true;
        }
        else if(braces[size] == '{' && braces[size+1] == '}'){
            nikocadoAvocadoBrace = true;
        }
        else if(braces[size] == '[' && braces[size+1] == ']'){
            nikocadoAvocadoBrace = true;
        }
        else{
            nikocadoAvocadoBrace = false;
        }
        size++;
    }
	return nikocadoAvocadoBrace;
}