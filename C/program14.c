


#include"Header.h"

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





