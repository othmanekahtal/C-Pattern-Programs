#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0;i<line;i++){
        for (int j = 0;j<i;j++){
            printf("   ");
        }
        for (int j = 0;j<line-i;j++){
            printf(" %c ", 64+line-i);
        }
        printf("\n");
    }
}