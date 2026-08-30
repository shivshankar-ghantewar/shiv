#include<stdio.h>

int main()
{
	int arr[]={4,7,2,7,4,9,7,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i,j,k,largest_freq=0,largest_ele=0;
	
	
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
		 
		 
		 if(count>largest_freq)
		 {  largest_ele=arr[i];
		 	largest_freq=count;
		 }
	}
	printf("\n");
	printf("%d -> %d",largest_ele,largest_freq);
}
