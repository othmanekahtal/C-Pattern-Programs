#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 1;i<=line;i++){
        for (int j = 0;j<line-i+1;j++){
            printf(" ");
        }
        for (int j = 1;j<i*2;j++){
            printf("%c",i+64);
        }
        printf("\n");
    }
}