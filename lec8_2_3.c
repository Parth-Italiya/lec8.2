#include<stdio.h>

void main(){
	
	int a[1000],b[1000],c[1000];
	int sizeA,sizeB,i;
	
	printf("enter size of array A:");
	scanf("%d",&sizeA);
	
	for (i=0; i<sizeA; i++){
		printf("enter A[%d]",i);
		scanf("%d",&a[i]);
	}

	printf("The sqaures are: \n");
	for (i=0; i<sizeA; i++){
		printf("%d\n",a[i]*a[i]);
	
	}

}
/*
	printf("elements of array A\n");
	for (i=0; i<sizeA; i++){
		printf("%d\n",a[i]);
	}
*/



