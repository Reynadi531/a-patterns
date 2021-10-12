#include <stdio.h>

int main() {
   //Variable
   int i, triangle, number;

   //Inputing Number Of the rows
   printf("Enter the number: ");
   scanf("%d", &number);

   //Making pyramid triangle number with foreach
    for (i = number; i >= 1; --i) {
        for (triangle = 1; triangle <= i; ++triangle) {
            printf("%d ", triangle);
        }
        printf("\n");
    }
   return 0;
}
