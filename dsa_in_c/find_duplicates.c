#include<stdio.h>

int main()
{
	int arr[]={5,2,8,2,5,9,5};
	int size=7,i,j,k,already=0;
	
	for(i=0;i<size-1;i++)
	{ int count=0;
	
	  for(k = 0; k < i; k++)
       {
        if(arr[k] == arr[i])
      {
        already = 1;
        break;
       }
       }   
	
		for(j=i+1;j<size;j++)
		{   
			if(arr[i]==arr[j])
			{   
			   count++;
			   if(count==1 && already==0)
			{
				printf("%d",arr[j]);
			}
			}
			
			
		}
	}
}
