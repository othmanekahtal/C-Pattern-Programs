#include <stdio.h>
#include <stdlib.h>
void main() {
    int r,c;
    printf("Enter Number of rows :");
    scanf("%d", &r);
    printf("\nEnter Number for columns :");
    scanf("%d", &c);
    for (int i = 0; i < r; i++){
        for (int j = 0;j<c; j++){
            printf("*");
        }
    }
}