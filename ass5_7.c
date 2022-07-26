#include<stdio.h>
// first n even natural numbers in reverse order
int main()
{
    int n;
    scanf("%d",&n);
    
    while(n)
    {
    printf("%d ",2*n);
    n--;
    }
    return 0;

}