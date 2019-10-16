#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int i;
    fprintf(stderr, "1, ");
    for(i = 2; i < 101; i++){
        printf("%d\n", i);
    }
    printf("%c\n", '\0');
    return 0;
}