//wap to find percentage of 5 subjects//
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    float percentage;
    printf("enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    percentage=(s1+s2+s3+s4+s5)/5;
    printf("The percentage of 5 subjects are: %f",percentage);
    return 0;

}