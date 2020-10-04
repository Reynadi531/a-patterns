#include<stdio.h>

int main()
{
    int i,j,n,k=0;
    printf("Enter the number of rows : \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        i<=5 ? k++ : k--;
        for(j=1;j<=n;j++)
        {
            if(j<=6-k || j>=4+k)
            printf("*");
            else
            printf(" ");    
        }
        printf("\n");
    }
    return 0;
}

/*  OUTPUT
Enter the number of rows : 
9
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********           */
