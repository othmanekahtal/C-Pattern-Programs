#include <stdio.h>
#include <stdlib.h>

void main(){
    int line;
    printf("Enter the Number of lines : ");
    scanf("%d",&line);
    int x = 1;
    for (int i = line;i>=1;i--){
        for (int j = 0; j < i; j++)
        {
            printf(" %d ",x);
        }
        printf("\n");
        x++;
    }
}