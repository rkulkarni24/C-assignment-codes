#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, r, col;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);

    // Addition
    printf("Sum of matrices:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<col;j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // Saddle Point
    int min, colIndex;
    for(i=0;i<r;i++) {
        min = a[i][0];
        colIndex = 0;

        for(j=1;j<col;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                colIndex = j;
            }
        }

        int k, flag = 1;
        for(k=0;k<r;k++) {
            if(a[k][colIndex] > min) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            printf("Saddle point: %d\n", min);
        }
    }

    return 0;
}