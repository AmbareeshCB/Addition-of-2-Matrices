#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],row,col;
	printf("ROW&COL");
	scanf("%d",&row);scanf("%d",&col);
	printf("MAT A");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("MAT B");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("SUM\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}