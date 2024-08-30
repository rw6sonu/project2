#include<stdio.h.>
int main()
{
    int num,i,count=0,first,last;


    printf("enter the num : ");
    scanf("%d",&num);

    last=num%10;

    for(i=1;num!=0;i++)
    {

    first=num;
    num=num/10;
    count++;
    }

    printf("num of count : %d",count);
    printf("\n first %d last %d ",first,last);
    printf("\n sum of first and last digits: %d",first+last);
    
}
