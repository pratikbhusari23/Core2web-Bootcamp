#include<stdio.h>

void main() {
	
	int x;
	printf("Enter no of rows : ");
      	scanf("%d",&x); 	
 

	for(int i=1 ; i<=x ; i++) {
		for(int j=1 ;j<=i ; j++) {
			printf("%d\t",i);
			
		}
		printf("\n");
	}
}
	
