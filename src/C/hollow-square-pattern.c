//Hollow Square Pattern

#include<stdio.h>
int main()
{
     int i, j, N;
    printf("Enter number of rows: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

/* Output:
Enter number of rows: 5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/
