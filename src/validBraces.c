#include <stdbool.h>
#include <stdio.h>
bool valid_braces (const char *braces)
{
    int size = 0;
    char *first, last;
    bool braceForImpact = true;
    while (braces[size] != '\0'){
        if(braces[size] == '(' || braces[size] == '[' || braces[size] == '{'){
            first[size] = braces[size];
            if(braces[size] == ')' || braces[size] == ']' || braces[size] == '}'){
                return NULL;
            }
        }
        size++;
    }
	return false;
}