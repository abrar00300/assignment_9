#include<stdio.h>
int main()
{
    int n;
    printf("enter even number = ");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
        {
            n++;
            printf("upper nearest number is = %d",n);
            break;
        }
    case 0:
        {
            printf("number is not even ");
            break;
        }
    }
    return 0;
}
