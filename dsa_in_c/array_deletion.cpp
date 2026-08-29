#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	int size=5;
	int index=3;
	
	if(index<size && index>=0)
     {
     	for(int i=index;i<size-1;i++)
     	{
	     	arr[i]=arr[i+1];  // shift items
	    }
	    size--;
	}	
	
	
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
