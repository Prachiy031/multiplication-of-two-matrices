/******************************************************************************
o/p:
Enter array elements a : 
1 2 3
4 5 6
7 8 9
Enter array elements b : 
1 2 3
4 5 6
7 8 9

Sum of arrays is : 
2 4 6 
8 10 12 
14 16 18 

Multiplication of arrays is :
30 36 42 
66 81 96 
102 126 150 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],i,j;  // given arrays a,b and sum : c,mult :d
    int *p,*q;
    p = &a[0][0];
    q = &b[0][0];
    
    printf("Enter array elements a : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(p+(i*3)+j));
        }
    }
    printf("Enter array elements b : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(q+(i*3)+j));
        }
    }

    printf("\nSum of arrays is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = *(p+(i*3)+j) + *(q+(i*3)+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMultiplication of arrays is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            d[i][j] =0;
            for(int k=0;k<3;k++)
            {
                d[i][j] = d[i][j] + *(p+(i*3)+k) * *(q+(k*3)+j);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
