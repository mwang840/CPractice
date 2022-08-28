#include <stdio.h>
#include <stdlib.h>

char findMissingLetter(char array[], int arrayLength){
    int counter = 1;
    char temp = array[0];
    char missing = 'a';
    //Set up a counter, then iterate throw the array each time while keeping track of the temp variable at first index
    for(int i = 0; i < arrayLength; ++i){
        temp += counter;
        //If the element is not equal to the array elements we found it
        if(array[i] != temp){
            missing = temp;
        }
    }

    return missing;
}


int main(){
    char arr1[] = {'a', 'b', 'c', 'd', 'f', '\0'};
    char arr2 [] = {'O', 'Q', 'R', 'S'};
    char missing1 = findMissingLetter(arr1, 5);
    char missing2 = findMissingLetter(arr2, 4);
    printf("Missing character is %c ", missing1);
    printf("Missing character is %c ", missing2);
    return 0;
}