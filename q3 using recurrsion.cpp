#include<stdio.h>
int fact=1;
int factfunc(int n)
{
	
	if(n!=0)
	{
		fact*=n;
    return factfunc(n-1);
    }
    else
    {
      printf("%d",fact); 
    }
  
}
int main()
{
	int n;
printf("enter the number to find the fact of that number:");
scanf("%d",&n);
factfunc(n);	
}


