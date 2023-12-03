#include<stdio.h>
int main()
{
 int myNumbers[4] = {25,50,75,100};
 *myNumbers=40;
 *(myNumbers+1)=23;


 for(int i=0; i<4;i++)
 {
 printf("%d  %d\n",myNumbers[i],i);
 }
 return 0;
    
    
}
