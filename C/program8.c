/*
   
Step 1 :  Understand the problem statement

Step 2 :  Write the Algorithm
Step 3 :  Decide the programming language
step 4 :  write the program
Step 5 :  Test the program

*/

///////////////////////////////////////////////////////////////////
//
//Step 1 : Understand the problem statement
//         user is going to enter any 2 integer
//          And we have to perform Addition
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
// Step 2 : Write the algorithm
/*
    START
          Accept first number as No1
          Accept second number as No2
          Create the variable as Ans to store the result
          perform the Addition and store into Ans
//        Display the result from Ans
*/

///////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////
// Step 3 : Decide the programming language 
//            We Select C programming


///////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
// Step 4 : Write the program

//////////////////////////////////////////////////////////////////


#include<stdio.h>

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


int Addition(int iNo1, int iNo2 )
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
    scanf("%d", &iValue1);

    

    printf("Enter second Number :\n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1,iValue2);
    
   
    printf("Addition is : %d\n",iResult);


    return 0;
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



