#include<stdio.h>

void main() {


	int rows,cols,x=0,y=1;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	printf("Enter no of cols : ");
	scanf("%d",&cols);

	for(int i=1 ;i<=rows ;i++) {
		for(int j=1 ;j<=cols ;j++) {
			printf("%d\t",x);
			y=x+y;
			x=y-x;
		
		}
		printf("\n");
	}

}
