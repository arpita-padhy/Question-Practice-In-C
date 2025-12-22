//wap to print simple interest//
#include<stdio.h>
int main()
{
    int p,r,t,SI;
    printf("enter value of P: ");
    scanf("%d",&p);
    printf("enter value of R: ");
    scanf("%d",&r);
    printf("enter value of T: ");
    scanf("%d",&t);
    SI=(p*r*t)/100;
    printf("the simple interest is : %d",SI);
    return 0;
}