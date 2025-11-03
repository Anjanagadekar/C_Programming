///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   It is used to perform multiplication of three numbers
//  Input:          int
//  Output :        int
//  Author :        Anjana Dagdu Gadekar
//  Date :          17/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    
    if(iNo1 != 0 )
    {
       iMult = iMult * iNo1;
    }

    if(iNo2 != 0 )
    {
       iMult = iMult * iNo2;
    }

   if(iNo3 != 0 )
    {
       iMult = iMult * iNo3;
    }

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
       return 0;
    }
        
        return iMult;
        
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0;
    
    printf("Please enter three numbers");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet=Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three number is:%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 5         Input2 : 4    Input3 : 7         Output : 140
//  Input1 : 5         Input2 : 0    Input3 : 7         Output : 35
//  Input1 : 5         Input2 : 0    Input3 : 0         Output : 5
//  Input1 : 0         Input2 : 0    Input3 : 0         Output : 0
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////