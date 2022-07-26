#include<stdio.h>
// squares of first n natural numbers
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}