#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=2;i++)       // first two lines of pattern 
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=3;i<n;i++)        // mid section of pattern 
    {
        for(int j=1;j<=i;j++)
        {
            if ((j==1) | (j==i))
            {
                printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
    for(int j=1;j<=n;j++)       // last line of pattern 
        {
            printf("* ");
        }
        printf("\n");
    return 0;
}

// OUTPUT

/*

Enter the number of rows: 5
*
* *
*   *
*     *
* * * * *

*/
