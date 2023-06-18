#include<stdio.h>
int result=0;
int primetest(int n,int i)
{
	if(n>i)
	{
    if (n%i==0) 
	{
		result=1;
        return result;
    } 
	else 
	{
        return primetest(n,i+1);
    }
    }
  
}

int main() {
    int n,result1,i=2;
    printf("Enter the number test whether it is prime or not ");
    scanf("%d",&n);
    result1=primetest(n,i);
    if(result1==1)
     printf("%d is not a prime a number",n);
    else
     printf("%d is a prime a number",n);
    return 0;
}

