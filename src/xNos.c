#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool xo(const char *str);


int main(){
    const char *ex = "ooxx";
    (xo(ex));
    return 0;
}

bool xo(const char *str){
    int x, o = 0;
    char* temp = &str[0];
    while(*temp != '\0'){
        if(str[0] == 'x'){
            x++;
        }
        else if(str[0]== 'o'){
            o++;
        }
        temp++;
    }
    if(x == o){
        return true;
    }
    else if(x != o){
        return false;
    }
    else if(x == 0 && o == 0){
        return true;
    }
}