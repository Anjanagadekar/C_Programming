///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to accept single digit number from user & print it into word
//  Input:          int
//  Output :        String
//  Author :        Anjana Dagdu Gadekar
//  Date :          19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
     if(iNo <= 0)
    {
        iNo=-iNo;
    }

    switch(iNo)
        {
            case 1:
                    printf("One");
                    break;

            case 2:
                    printf("Two");
                    break;

            case 3:
                    printf("Three");
                    break;

            case 4:
                    printf("Four");
                    break;

            case 5:
                    printf("Five");
                    break;

            case 6:
                   printf("Six");
                    break;

            case 7:
                    printf("Seven");
                    break;

            case 8:
                    printf("Eight");
                    break;

            case 9:
                    printf("Nine");
                    break;

            default:
                    printf("Invalid input");
        }

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 9            Output : Nine  
//  Input : -8           Output : Eight
//  Input : 12           Output : Invalid number
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////