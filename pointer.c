#include<stdio.h>

int main()
{	
	printf("Pointer Basics\n");
	int a =76;
	int *ptra=&a;
	int *ptr= NULL;

	printf("The Address of pointer is %d\n", &ptra );
	printf("The Address of a is %p\n,", &a); // %p for print pointer address
	printf("The Address of a is %p\n", ptra ); //can use %d , %p ki jagah
	printf("The Value of a is %d\n", *ptra );
	printf("The Value of a is %d\n", a );
	printf("The address of null pointer  is %d\n", ptr );
    
	return 0;
}