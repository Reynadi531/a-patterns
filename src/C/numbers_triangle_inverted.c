#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = N; i >= 1; i--){
        for (int a = 1; a <= i; a++){
            printf("%d ", a);
        }
        printf("\n");
    }
}

// Sample output
// 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
