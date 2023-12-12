#include<stdio.h>
void main(){
	
	int endyear,startyear,i,count=0;
	printf("Enter the Starting Year: ");
	scanf("%d",&startyear);
	printf("\nEnter the Ending Year: ");
	scanf("%d",&endyear);

	int leap[startyear];
	
	if(startyear>endyear){
		printf("\nStart Year must not be Bigger than Ending Year.");
	}

	for(i=startyear;i<=endyear;i++){
		if(i%4==0 || i%100==0 || i%400==0){
			count++;
		}
	}

	printf("\nThe Leap Years Between the Year %d and %d is ",startyear,endyear);
	for(i=0;i<=count;i++){
		printf("%d ",leap[i]);
	}
}
