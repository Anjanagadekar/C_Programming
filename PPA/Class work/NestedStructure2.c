#include<stdio.h>


struct Hello
{
    int no;
    float marks;

   struct Demo
{
    int i;
    float f;
}dobj;

};

int main()
{
    printf("size of Hello structure is: %lu\n",sizeof(struct Hello));

    return 0;
}
