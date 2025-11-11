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
    printf("size of demo is : %lu\n", sizeof(struct Demo));
    printf("size of object is : %lu\n", sizeof(dobj));
    return 0;
}