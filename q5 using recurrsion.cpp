#include <stdio.h>
int sum=0;
int sumfunc(int n)
 {
    if (n==0) 
	{
        return sum;
    } 
	else 
	{
		sum=sum+n%10;
        return sumfunc(n/10);
    }
}

int main() {
    int n,sumnum;
    printf("Enter THE NUMBER YOU WANT TO CALCULATE THE SUM ");
    scanf("%d", &n);
    sumnum=sumfunc(n);
    printf("%d",sumnum);

    return 0;
}

