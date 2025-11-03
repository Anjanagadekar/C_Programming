///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Description :   It is used to accept range from user and display all addition of all even numbers
//  Input:          int
//  Output :        int
//  Author :        Anjana Dagdu Gadekar
//  Date :          21/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart,  int iEnd)
{
    int iCnt=0;
    int iAddtion=0;

    if(iStart < 0 || iEnd < 0 || iEnd<iStart)
    {
       return 0;
    }
        
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if((iCnt % 2)== 0)
         iAddtion = iAddtion + iCnt;
    }

    return iAddtion;
}

// Time Complexity : O(N)

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iRet=0;
   
    printf("enter starting point");
    scanf("%d", &iValue1);

    printf("enter ending point");
    scanf("%d", &iValue2);

    iRet=RangeSumEven(iValue1, iValue2);

    if(iRet == 0)
    {
        printf("invalid range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 23        Input : 30          Output : 108
//  Input1 : 10        Input : 18          Output : 70
//  Input1 : -10       Input : 2           Output : Invalid range
//  Input1 : 98        Input : 18          Output : Invalid range
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////