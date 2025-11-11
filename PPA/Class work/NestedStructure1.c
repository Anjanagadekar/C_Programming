#include<stdio.h>

struct Demo
{
    int i;
    float f;
};
struct Hello
{
    int no;
    float marks;
    struct Demo dobj;
    struct Demo dobj1;
};

int main()
{
    printf("size of Hello structure is: %lu\n",sizeof(struct Hello));

    return 0;
}
