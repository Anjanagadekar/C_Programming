#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo dobj;

    dobj.i=11;
    dobj.f=90.4f;
    dobj.j=21;

    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);
    printf("%d\n",dobj.j);

    return 0;
}


