//wap to print factorial of a number//
#include<stdio.h>   
int main(){
    int n, fact=1;
    printf("Enter a number here :");
    scanf("%d", &n);
    if(n<0){
        printf("facotrial of negative number does not exist");
    }
    else{
        for(int i=n; i>0; i--)
        {
            fact = fact*i;
        }
        printf("The factorial is: %d",fact);
    }
    return 0;
}