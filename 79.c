//Q79: Perform diagonal traversal of a matrix.//

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

   
    for (int k = 0; k < rows + cols - 1; k++) {
        int i = (k < rows) ? k : rows - 1;
        int j = k - i;

        while (i >= 0 && j < cols) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}
