#include<stdio.h>
// first n even natural numbers
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while( i<=n)
    printf("%d ",2*i++);
    return 0;

}