#include <stdio.h>
#include <stdlib.h>
void main(){
    int line;
    printf("Enter Number of the line:");
    scanf("%d", &line);
    int cha = 65;
    for (int i = 0;i<line;i++){
        for (int j = 0;j<line-i+1;j++){
            printf(" ");
        }
        for (int j = 0;j<=i;j++){
            printf("%c",cha);
        }
        for (int j = 0; j < i; j++){
            printf("%c",cha);
        }
        printf("\n");
        cha += 2;
    }
}