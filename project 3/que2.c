#include<stdio.h>
int main()
{
    int num,i,count=0;

    printf("enter the num: ");
    scanf("%d",&num);

    for(int i=1;num!=0;i++)
    {   
   
        num =num/10;
        count++;
    }
    printf("num of count:  %d",count);
}