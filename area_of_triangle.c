//wap to print area of triangle//
#include<stdio.h>
int main()
{
    int height,base,area;
    printf("enter base of triangle: ");
    scanf("%d",&base);
     printf("enter height of triangle: ");
    scanf("%d",&height);
    
    area=0.5*height*base;
    printf("the area of triangle is: %d\n",area);
    return 0;


}