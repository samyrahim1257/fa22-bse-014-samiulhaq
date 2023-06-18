#include<stdio.h>
int power=1;
int powfunc(int a,int b)
{

    if (a==0) 
	{
        return power;
    } 
	else 
	{
		power=power*b;
        return powfunc(a-1,b);
    }
  
}

int main() {
    int a,b,result;
    printf("Enter the exponent:");
    scanf("%d",&a);
    printf("Enter the base:");
    scanf("%d",&b);
    result=powfunc(a,b);
    printf("%d raise to the power %d = %d",a,b,result);
    return 0;
}

