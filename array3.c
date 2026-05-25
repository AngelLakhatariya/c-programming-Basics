#include<stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    printf("Enter array elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

}