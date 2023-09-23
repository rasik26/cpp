#include<stdio.h>
#include<stdlib.h>



void main(){
	int n,i,sum=0;
	char* p;
	
	
	
	printf("enter no of string: \n");
	scanf("%d",&n);
	p=(char*) malloc(n*sizeof(char) + 1);
	
	printf("Enter %d character :",n);
	
	
	scanf("%s",p);
	
	
	printf("Entered character is: ");
	printf("%s ",p);
		

	free(p);
	
}
