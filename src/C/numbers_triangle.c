#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        for (int a = 1; a <= i; a++){
            printf("%d ", a);
        }
        printf("\n");
    }
}

//Sample Output
// 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5