#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool xo(const char *str);


int main(){
    const char *ex = "ooxx";
    bool xoro = xo(ex);
    printf(xoro);
    return 0;
}

bool xo(const char *str){
    int x = 0;
    int o = 0;
    const char* temp = &str[0];
    while(*temp != '\0'){
        if(*temp == 'x'|| *temp == 'X'){
            x++;
        }
        else if(*temp == 'o'|| *temp == 'O'){
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