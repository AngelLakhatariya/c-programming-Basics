
#include<stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int row, col;
    int sum = 0;

    printf("Enter array elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &row);

    sum = 0;

    printf("Elements of row %d: ", row);

    for(j=0; j<3; j++)
    {
        printf("%d ", a[row][j]);
        sum = sum + a[row][j];
    }

    printf("\nThe sum of row %d: %d\n", row, sum);

    printf("\nEnter column number: ");
    scanf("%d", &col);

    sum = 0;

    printf("Elements of column %d: ", col);

    for(i=0; i<3; i++)
    {
        printf("%d ", a[i][col]);
        sum = sum + a[i][col];
    }

    printf("\nThe sum of column %d: %d", col, sum);

}