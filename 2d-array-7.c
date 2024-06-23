#include<stdio.h>
#include<string.h>

int main()
{
    int row , column ;

    printf("Enter row length please : ");
    scanf("%d" , &row);

    printf("\nEnter column length please : ");
    scanf("%d" , &column);

    if(row == column)
    {
        int mat[row][column] , k , r  ;
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("Enter elements of row %d column %d\n" , k+1 , r+1);
                scanf("%d" , &mat[k][r]);

            }
        }
        system("cls");

        printf("\nThe given 2D array is : \n\n");

        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("\t%d   " , mat[k][r]);
            }
            printf("\n");
        }

        int transposemat[row][column] , count = 0 ;
        printf("\nTranspose matrix is : \n\n");
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                transposemat[r][k] = mat[r][k] ;
                printf("\t%d   " , transposemat[r][k]);
            }
            printf("\n");
        }
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                if(transposemat[r][k] != mat[k][r])
                {
                    count++ ;
                }
            }
        }

        if(count == 0)
        {
            printf("\nGiven Matrix is a symmetric matrix\n");
        }
        else
        {
            printf("\nGiven Matrix is not a symmetric matrix\n");
        }
    }

    else
    {
        printf("\nPlease enter a Square matrix.(row & column are same)");
    }

   return 0 ;
}
