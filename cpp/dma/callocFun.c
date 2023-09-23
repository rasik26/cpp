#include<stdio.h>
#include<stdlib.h>

void main(){
	int n,i,sum=0;
	int* p;
	
	
	
	printf("enter no of element: \n");
	scanf("%d",&n);
	p=(int*) calloc(n,sizeof(int));
	
	printf("Enter %d element :",n);
	
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	
	printf("Entered number is: ");
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
		sum=sum+p[i];
	}
	printf("summation=%d",sum);
	free(p);
	
}
