#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    int Num = 1;
    for (int i = 0;i<line;i++){
        for (int j = 0;j<line-i+1;j++){
            printf(" ");
        }
        for (int j = 0;j<=i;j++){
            printf("%d",Num);
        }
        for (int j = 0; j < i; j++){
            printf("%d",Num);
        }
        printf("\n");
        Num += 2;
    }
}