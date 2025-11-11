#include<stdio.h>

int main()
{
    int Arr[]={11,21,51,101,111};

    int *p=NULL;
    int *q=NULL;

    p=&(Arr[1]);
    q=&(Arr[4]);

   // p+q;        //Error (invalid operand) Not Allowed

   p=p+3;          //Allowed

    printf("data pointed by p is: %d\n", *p);
    //printf("data fetched by q is: %d\n", *q);
    return 0;
}