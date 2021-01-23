#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++){
        for (int j = 0;j<i;j++){
            printf(" ");
        }
        for (int j = 0;j<=(line-i)*2;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
}