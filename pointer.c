#include<stdio.h>
int main()
{
    char a[20];
    printf("Enter a string :");
    scanf("%s",a);
    printf("a :%s",a);
    char *p=a;
    printf("address of a:\n%p",p);
    return 0;
}
