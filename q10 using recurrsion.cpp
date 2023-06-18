#include<stdio.h>
int i=1;
int lcmfunc(int a,int b,int i)
{

    if (a%i==0&&b%i==0) 
	{
        return i;
    } 
    
	else 
	{      
        return lcmfunc(a,b,i+1);
    }
 
    
}

int main() {
    int a,b,i=2,result;
    printf("Enter the first number to find lcm with the other number ");
    scanf("%d",&a);
    printf("Enter the second number to find lcm with the other number ");
    scanf("%d",&b);
    result=lcmfunc(a,b,i);
    printf("%d the lcm of %d and %d",result,a,b);
    return 0;
}

