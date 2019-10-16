#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(){
    int prime = 0;
    char flag = '0';
    do{
        char word[4];
        scanf("%s", word);
        flag = word[0];
        if(!flag){
            break;
        }
        int number = atoi(word);
        if(!prime){
            prime = number;
            fprintf(stderr, "%d, ", prime);
        }
        else if(number % prime != 0){
            printf("%d\n", number);
        }
    }while(flag);
    printf("%c", '\0');
    return 0;
}