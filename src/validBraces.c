#include <stdbool.h>
#include <limits.h>
#include <stdio.h>
#include "validBraces.h"
//might be done with a struct and helper functions
struct braceNode {
    int capacity;
    char info;
    unsigned maxCapacity;
    int *array;
};braces;
//Pops the node off the stack
int pop(struct braceNode *node);
void push(char information);

//Checks to see if the stack is full
int isFull(struct braceNode *node){
    return node->capacity == node->maxCapacity - 1;
}

//Checks to see if the stack is empty
int isEmpty(struct braceNode *node){
    return node->capacity == -1;
}

//creates a new stack
struct braceNode *createStack(unsigned capacity){
    //initalizes stack on memory
    struct braceNode *stackInterchange = (struct braceNode*)malloc(sizeof(struct braceNode));
    //Signs the capacity to the stack
    stackInterchange->capacity = capacity;
    //Initialize the information to a empty char
    stackInterchange->info = "";
    //Creates an initial array on the heap
    stackInterchange->array = (int*)malloc(sizeof(stackInterchange->capacity) * sizeof(int));
    return stackInterchange;
}


//pushes the node onto the stack by first allocating the node in memory
void push(char information){
    struct braceNode *newNode = (struct braceNode*)malloc(sizeof(newNode));
    //Checks to see if the node is null
    if(newNode == NULL){
        exit(0);
    }
    newNode->info = information;
    //sets the nodes next value
}
//pops a node off the list'
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
        if(braces[size] == '(' || braces[size] == '{' || braces[size] == '['){
            push(braces[size]);
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