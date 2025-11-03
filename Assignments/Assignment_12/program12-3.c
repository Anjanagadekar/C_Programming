
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//  Function Name :  sum_of_Factors
//  Description :    It is used to Sum of all factors of a number
//  Input :          Int
//  Output :         Int
//  Auther :         Anjana Dagdu Gadekar
//  Date :           24/10/2025
//
///////////////////////////////////////////////////////////////////////


int  sum_of_Factors(int number)
{

    int i= 0, iSum=0;

    if(number<0)
    {
        printf("Invalid Input");
    }
    
    

    for(i=1; i<=number; i++)
    {
        if((number % i)==0)
        {
            
                iSum = iSum + i;
            
        }

    } return iSum;

}// End of sum_of_Factors

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int number;

    printf("Enter number :\n");
    scanf("%d",&number);

    
    printf("%d\n",sum_of_Factors(number));
    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 12      Output :  28
//     Input1 : 24      Output :  60
//
///////////////////////////////////////////////////////////////////////


