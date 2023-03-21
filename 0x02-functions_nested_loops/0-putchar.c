#include <stdio.h>
#include <string.h>

int main (){
    char str[100] = "_putchar";
    
    for (int i = 0; i < strlen(str); i++){
        putchar(str[i]);
        printf("\n");
    }

    return 0;
}
