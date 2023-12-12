#include<stdio.h>

void main(){
	
	int a[1000],b[1000],c[1000];
	int sizeA,sizeB,i;
	
	printf("enter size of array A:");
	scanf("%d",&sizeA);
	printf("enter size of array B:");
	scanf("%d",&sizeB);
	
	for (i=0; i<sizeA; i++){
		printf("enter A[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0; i<sizeB; i++){
		printf("enter B[%d]",i);
		scanf("%d",&b[i]);
	}
	printf("elements of array A\n");
	for (i=0; i<sizeA; i++){
		printf("%d\n",a[i]);
		c[i]=a[i];
	}
	printf("elements of array B\n");
	for (i=0; i<sizeB; i++){
		printf("%d\n",b[i]);
		c[sizeA+i]=b[i];
	}
	printf("array c is: \n");
	for (i=0; i<sizeA+sizeB; i++){
		printf("%d\n",c[i]);
	
	}

}


