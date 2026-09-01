#include<stdio.h>

void insertion_sort(int arr[],int size)
{
	int i,j,key;
	
	for(i=1;i<size;i++)
	{
		key=arr[i];
		
		for(j=i-1; j>=0 && arr[j]>key;j--)
		{
			arr[j+1]=arr[j];
		}
		 arr[j+1]=key;
	}
}

void display(int arr[],int size)
{ int i;
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
}

int main()
{
	int arr[]={5,7,4,6,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	printf("unsorted Array:");
	display(arr,size);
	
	insertion_sort(arr,size);
	
	printf("\n  sorted Array:");
	display(arr,size);
}
