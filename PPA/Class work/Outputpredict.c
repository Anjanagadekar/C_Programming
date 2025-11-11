#include<stdio.h>

int main()
{
    int no=10;
    int *p=NULL;
    p=&no;

    printf("%d",no);        //10
    printf("%d",*p);        //10

    *p=11;

    printf("%d",no);        //11
    printf("%d",*p);        //11

    return 0;
}