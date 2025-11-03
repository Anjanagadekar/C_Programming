///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//  Function Name :  sum_of_even_factors
//  Description :    It is used to perform Sum of even factors (exclude the number itself)
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Anjana Dagdu Gadekar
//  Date :           25/10/2025
//
///////////////////////////////////////////////////////////////////////


int  sum_of_even_factors(int number)
{
    if(number<0)
    {
        printf("Invalid Input");
    }
    
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1;iCnt<-number;iCnt++)
    {
        if(number%iCnt==0)
        {
            if(iCnt%2==0)
            {
                iSum = iSum+iCnt;
            }
        }

    } return iSum;
}// End of  sum_of_even_factors

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

    
    printf("%d",sum_of_even_factors(number));
    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 12      Output :  24
//
///////////////////////////////////////////////////////////////////////



