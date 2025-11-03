///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name :  ChkZero
//  Description :    It is used to  accept number from user and check whether it contains 0 in it or not
//  Input :          int
//  Output :         bool
//  Auther :         Anjana Dagdu Gadekar.
//  Date :           26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    if(iNo == 0)
    {
        return TRUE;
    }

    while(iNo !=0)
    {
        iDigit=iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;

}// End of ChkZero

// Time complexity: o(N)


//////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;

}// End of main

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 2395      Output :  FALSE
//     Input1 : 1018      Output :  TRUE
//
/////////////////////////////////////////////////////////////////////////////////////////