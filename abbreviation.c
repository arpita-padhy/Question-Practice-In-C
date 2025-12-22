//wap in c language to give abbrevated name of given name by user//
#include<stdio.h>
int main(){
    char f[20], m[20], l[20];
    printf("Enter your name to print it's abbreviation : ");
    scanf("%s%s%s", f,m,l);
    printf("Your abbreviated name is : %c%c%c", f[0],m[0],l[0]);
    return 0;
}