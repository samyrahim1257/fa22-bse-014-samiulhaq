#include<stdio.h>
int sum=0;
int sumfunc(int n)
{
	
	if(n!=0)
	{
		sum+=n;
    return sumfunc(n-1);
    }
    else
    {
      printf("%d",sum); 
    }
  
}
int main()
{
	int n;
printf("enter the number to which you want to get the sum of numbers:");
scanf("%d",&n);
sumfunc(n);	
}


