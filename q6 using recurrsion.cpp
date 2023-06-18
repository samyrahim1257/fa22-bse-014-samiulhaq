#include <stdio.h>

int gcdfunc(int larg,int small,int larg1)
 {
    if ((larg1%larg==0)&&(small%larg==0)) 
	{
        return larg;
    } 
	else 
	{
   
        return gcdfunc(larg-1,small,larg1);
    }
}

int main() {
    int a,b,GCD;
    printf("Enter the first number you want to calculte GCD with the other number ");
    scanf("%d",&a);
    printf("Enter the second number you want to calculte GCD with the other number ");
    scanf("%d",&b);
    if(a>b)
    {
    	GCD=gcdfunc(a,b,a);
	}
    else
    {
        GCD=gcdfunc(b,a,b);
    }
    printf("%d",GCD);

    return 0;
}

