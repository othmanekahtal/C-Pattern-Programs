#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0;i<line; i++)
    {
        for (int j = 0;j<line-i;j++){// white space
            printf(" ");
        }
        for (int j = i ;j>=0;j--){//
            printf("%d",j);
        }
        for (int j = 1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}