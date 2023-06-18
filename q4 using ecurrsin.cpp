#include <stdio.h>
int recurfunc(int n)
 {
    if (n==0||n==1) 
	{
        return 1;
    } 
	else 
	{
        return recurfunc(n-1)+recurfunc(n-2);
    }
}

int main() {
    int n;
    printf("Enter the number to find the recursion series up to that number: ");
    scanf("%d", &n);
    for (int i=0;i<=n;i++)
	 {
        printf("%d ", recurfunc(i));
    }

    return 0;
}

