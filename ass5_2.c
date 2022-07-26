#include<stdio.h>
// first n natural numbers
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("%d\n",i++);
    }
    return 0;
}