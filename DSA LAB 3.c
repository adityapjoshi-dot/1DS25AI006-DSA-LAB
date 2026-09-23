#include <stdio.h>

#define ROWS 3
#define COLS 3


void printMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}





void linearSearch(int mat[ROWS][COLS], int target) {
    int found = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat[i][j] == target) {
                printf("Element %d found at row %d, column %d.\n", target, i, j);
                found = 1;
                return; 
            }
        }
    }
    if (!found) {
        printf("Element %d not found in the matrix.\n", target);
    }
}




void findMinMax(int mat[ROWS][COLS]) {
    int min = mat[0][0];
    int max = mat[0][0];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat[i][j] < min) min = mat[i][j];
            if (mat[i][j] > max) max = mat[i][j];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}





void sumAllElements(int mat[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += mat[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
}






void printUpperTriangle(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (j >= i) {
                printf("%d\t", mat[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
}





void sumEveryRow(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        for (int j = 0; j < COLS; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, rowSum);
    }
}







void transposeMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d\t", mat[j][i]); 
        }
        printf("\n");
    }
}







void printLowerTriangle(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (j <= i) {
                printf("%d\t", mat[i][j]);
            } else {
                printf("\t"); 
            }
        }
        printf("\n");
    }
}







int main() {
    
    int matrix[ROWS][COLS] = {
        {5, 2, 9},
        {1, 8, 3},
        {4, 7, 6}
    };
    int searchTarget = 8;

    printf("the original matrix is:\n");
    printMatrix(matrix);

    printf("\n Linear Search of 2d array \n");
    linearSearch(matrix, searchTarget);

    printf("\nminimum and maximum elements are:\n");
    findMinMax(matrix);

    printf("\nthe sum of all elements=\n");
    sumAllElements(matrix);

    printf("\nthe upper triangle of the matrix is:\n");
    printUpperTriangle(matrix);

    printf("\nthe sum of every rows is:\n");
    sumEveryRow(matrix);

    printf("\nthe transpose of the matrix is:\n");
    transposeMatrix(matrix);

    printf("\n the lower triangle of the matrix is:\n");
    printLowerTriangle(matrix);

    return 0;
}










































