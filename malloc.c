#include<stdio.h>
#include<stdlib.h>
{
int main()
	int n,i;//give size of the memory block
	printf("Enter the size of the memory:\n");
	scanf("%d",&n);
	//create memory block
	int *ptr=(int*)malloc(n*sizeof(int));
     //check memeory is created or not
     if(ptr==NULL)
     {
     	printf("Memory is not created\n");
     	
	 }
	 else
	 {
	 	printf("Memory is created\n");
	 }
	 //copy address into another varibale
	 int *p=ptr;
	 //Enetr elemets into the memory 
	 printf("Enetr elements into the memory block\n");
	 for(i=1;i<=n;i++)
	 {
	 	scanf("%d\n",ptr);
	 	ptr++;
	 }

	 
	 printf("The elemets are \n");
	 for(i=1;i<=n;i++)
	 {
	 	printf("%d\n",*p);
	 	p++;
		 
	 }
}