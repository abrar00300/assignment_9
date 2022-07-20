#include<stdio.h>
int main()
{
    int n;
    printf("enter your number to change its sign = ");
    scanf("%d",&n);
    switch(n<0)
    {
    case 1:
        {
            n=-n;
             printf("%d",n);
            break;
        }
    case 0:
        {
            n=-n;
             printf("%d",n);
            break;
        }
    }
    return 0;
}
