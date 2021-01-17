#include <stdio.h>
#include <stdlib.h>
void main(void){
    int line;
    char alphabet[] = {"ABCDEFGHIKLMNOPQRSTVXYZ"};
    printf("Enter Number of the line:");
    scanf("%d", &line);
    for (int i = 0;i<line;i++){
            int n = 0;
        for (int j = line;j>i;j--){
            printf(" %c ", alphabet[n]);
            n++;
        }
        printf("\n");
    }
}