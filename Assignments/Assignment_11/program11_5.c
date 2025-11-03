///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description :   It is used to accept range from user & display all numbers in reverse order between that range
//  Input:          int
//  Output :        int
//  Author :        Anjana Dagdu Gadekar
//  Date :          21/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
   int iCnt=0;

    if(iEnd<iStart)
    {
        printf("Inavlid Range");
    }
        
   for(iCnt=iEnd; iCnt>=iStart; iCnt--)
   {
        printf("%d\t", iCnt);
   }
}

// Time Complexity : O(N)

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0;
   
    printf("enter starting point");
    scanf("%d", &iValue1);

    printf("enter ending point");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 23        Input : 35          Output : 35  34  33  32  31  30  29  28  27  26  25  24  23
//  Input1 : 10        Input : 18          Output : 18  17  16  15  14  13  12  11  10
//  Input1 : 10        Input : 10          Output : 10
//  Input1 : -10       Input : 2           Output : 2   1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
//  Input1 : 98        Input : 18          Output : Invalid range
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////