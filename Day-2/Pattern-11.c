#include <stdio.h>
#include <stdlib.h>

void main(){
    int line;
    printf("Enter the Number of lines : ");
    scanf("%d",&line);
    for (int i = 0;i<line;i++){
        for (int j = 0; j <= i; j++)
        {
            printf(" %d ",i+1);
        }
        printf("\n");
    }
}