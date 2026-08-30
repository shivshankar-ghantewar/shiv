#include<stdio.h>

int main()
{
	int arr[]={3,5,3,7,5,3,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i,j,k;
	
	for(i=0;i<size;i++)
	{  int count=1;
	   int already=0;
	   
		for(k=0;k<i;k++)
		{ 
			if(arr[k]==arr[i])
			{
				already=1;
				break;
			}	
		}
		
		if(already==1)
		{
			continue;
		}
		
			for(j=i+1;j<size;j++)
	        {
			   if(arr[i]==arr[j])
			   {
			   	count++;
			   }
	        }
		 printf("%d is: %d times\n",arr[i],count);
	
	}
	
	
}
