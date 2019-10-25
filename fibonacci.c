#include<stdio.h>

int fibonacci(int); /* Declaration of function fibonacci*/

int main(void)
{
int n,i;
printf("Enter the number till you want to print fibonacci series : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",fibonacci(i));
}
return 0;
}


int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return(1);
    }
if(n>2)
{
return(fibonacci(n-1)+fibonacci(n-2));
}
}
