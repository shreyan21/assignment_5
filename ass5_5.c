#include<stdio.h>
// first n odd natural numbers in reverse order
int main()
{
    int n;
    scanf("%d",&n);
    
    while(n)
    {
    printf("%d ",2*n-1);
    n--;
    }
    return 0;

}