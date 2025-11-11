#include<stdio.h>

int main()
{
    int Arr[]={11,21,51,101,111};

    int *p=NULL;
    int *q=NULL;

    p=&(Arr[1]);
    q=&(Arr[4]);

   printf("result of substraction is : %ld\n",q-p);     //Allowed

   q=q-2;           //Allowed

   printf("data pointed by q is:%d\n", *q);   
    return 0;
}