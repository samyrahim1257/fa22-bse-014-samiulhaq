#include<stdio.h>
int hailstonefunc(int n)
{
 if(n!=1)
 {
    if (n%2==0) 
	{
		int a=n/2;
		printf("%d ",a);
        return hailstonefunc(a);
    } 
	else 
	{
		int b=(n*3)+1;
		printf("%d ",b);
        return hailstonefunc(b);
    }
}
}

int main() {
    int n;
    printf("Enter the number to which you wnat to make the hailstone series:");
    scanf("%d",&n);
    hailstonefunc(n);
    return 0;
}

