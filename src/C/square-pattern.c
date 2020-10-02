#include<stdio.h>
int i,j,size;
int main(){
	printf("Insert the size of the square you want to make: ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("* ");
		}
		printf("\n");
	}
}
