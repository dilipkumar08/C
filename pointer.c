#include<stdio.h>
int main()
{
    char a[20];
    printf("Enter a string :");
    scanf("%s",a);
    printf("a :%s",a);
    char *p=a;
    printf("\naddress of a:%p",p);
    printf("\n%s",p);
return 0;    
    
}
