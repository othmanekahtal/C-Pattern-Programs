#include <stdio.h>
#include <stdlib.h>
void main(void){
    int line;
    printf("EnterThe Number of Lines :");
    scanf("%d", &line);
    for (int i = 1; i <= line;i++){
        for (int j = 1;j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}