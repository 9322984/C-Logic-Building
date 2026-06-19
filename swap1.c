#include<stdio.h>
int main(){
	int num1=9;
	int num2=6;
	int temp;
	
	printf("before swap\n");
	printf("num1: %d", num1);
	printf(" num2: %d", num2);

    temp=num1;
    num1=num2;
    num2=temp;
    
	printf("\nAfter swap\n");
	printf("num1: %d", num1);
	printf(" num2: %d", num2);
    	
}
