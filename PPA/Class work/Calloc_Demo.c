#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length=0;
    int *Arr=NULL;

    printf("Enter the no. of elements:\n");
    scanf("%d",&length);
    
    // step1.Allocate the memory
    Arr=(int *)calloc(length,sizeof(int));
    if(Arr==NULL)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        printf("memory gets successfully allocated");
    }

    //step2. Use the memory
    //step3. free the memory
    free(Arr);

    return 0;
}