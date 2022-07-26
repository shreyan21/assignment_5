#include<stdio.h>
// first n natural numbers in reverse order
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    printf("%d\n",n--);
    return 0;
}