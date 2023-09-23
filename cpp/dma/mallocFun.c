#include<stdio.h>
#include<stdlib.h>

void main(){
	int n,i;
	int* p;
	
	
	
	printf("enter no of element: \n");
	scanf("%d",&n);
	p=(int*) malloc(n*sizeof(int));
	
	printf("Enter %d element :",n);
	
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	
	printf("Entered number is: ");
	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	free(p);
	
}
