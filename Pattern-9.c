#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0;i<line;i++){
        for (int j = line; j > i; j--)
        {
            printf(" %d ",i+1);
        }
        printf("\n");
    }
}