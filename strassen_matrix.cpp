#include<stdio.h>
void strassen_matrix(int a[10][10],int b[10][10],int c[10][10]){
	int p1,p2,p3,p4,p5,p6,p7;
  p1= (a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
  p2= (a[1][0]+a[1][1])*b[0][0];
  p3= a[0][0]*(b[0][1]-b[1][1]);
  p4= a[1][1]*(b[1][0]-b[0][0]);
  p5= (a[0][0]+a[0][1])*b[1][1];
  p6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
  p7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
  
  c[0][0]=p1+p4-p5+p7;
  c[0][1]=p3+p5;
  c[1][0]=p2+p4;
  c[1][1]=p1-p2+p3+p6;
	
}
int main(){
	int a[10][10],b[10][10],c[10][10],i,j;
	printf("ENTER THE ELEMENT OF FIRST MATRIX: ");
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	  scanf("%d",&a[i][j]);
	
	printf("ENTER THE ELEMENT OF SECOND MATRIX: ");
	for(i=0;i<2;i++)
	  for(j=0;j<2;j++)
	  scanf("%d",&b[i][j]);
	
	printf("THE FIRST MATRIX IS: \n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++)
		 printf("%d\t",a[i][j]);
	}
	
	printf("\nTHE SECOND MATRIX IS: \n");
	for(i=0;i<2;i++){
		printf("\n");
		for(j=0;j<2;j++)
		 printf("%d\t",b[i][j]);
	}
	
	strassen_matrix(a,b,c);
	printf("\nRESULTANT MATRIX IS: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
