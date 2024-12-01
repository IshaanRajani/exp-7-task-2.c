/* Name: Ishaan Rajani
   roll no: 08
   UIN: 241P008

   wap to calculate sum of two matrix*/
#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], resultAdd[3][3];
    int rows = 3, cols = 3;

    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nMatrix Addition Result:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            resultAdd[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", resultAdd[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*output:
        Enter elements for the first 3x3 matrix:
1 2 3 4 5 6 7 8 9
Enter elements for the second 3x3 matrix:

9 8 7 6 5 4 3 2 1 

Matrix Addition Result:
10 10 10 
10 10 10 
10 10 10 */
