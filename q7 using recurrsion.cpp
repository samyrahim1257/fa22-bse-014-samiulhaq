#include<stdio.h>
int bin=0;
int d=1;
int binaryfunc(int n)
 {
    if (n==0) 
	{
        return bin;
    } 
	else 
	{
		bin=bin+d*(n%2);
		d=d*10;
        return binaryfunc(n/2);
    }
}

int main() {
    int n,result;
    printf("Enter the decimal number to convert it into binary ");
    scanf("%d",&n);
    result=binaryfunc(n);
     printf("%d",result);

    return 0;
}

