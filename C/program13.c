


#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Input         : Integer, Integer
// Output        : Integer
// Description   : Addition
// Date          : 04/10/2026
// Author        : Sham  Vilas Devsarkar
//
//////////////////////////////////////////////////////////////////


int Addition(

                int iNo1,  // first input
                int iNo2   // second input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;  // Business logic
    return iAns;
}

//////////////////////////////////////////////////////////////////
// Entry point of the Application
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first Number :\n");
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr,"unable to procced as input is Invalid\n");

        return EXIT_FAILURE;

    }


    

    printf("Enter second Number :\n");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr,"unable to procced as input is Invalid\n");

        return EXIT_FAILURE;

    }

    iResult = Addition(iValue1,iValue2);
    
   
    printf("Addition is : %d\n",iResult);


    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////
// Step 5 : Test the program
// Tested test cases
// --------------------------------------------------------------
//  Input 1       Input 2       Output
//  ------------------------------------------------------------
//  10              11           21
//  11              0            11
//  0               11           11
//  20              -9           11
//  -9              20           11
//  -20             11           -9
//////////////////////////////////////////////////////////////////



