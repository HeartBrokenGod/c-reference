#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n============= Program Started ============\n\n");

    int num1;
    int num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);


    //  if statement
    if( num1 < num2 )// condition
    {
        printf("%d < %d is true\n",num1,num2);
    }

    if( num1 > num2 )
    {
        printf("%d > %d is true\n",num1,num2);
    }

    if( num1 == num2 )
    {
        printf("%d == %d is true\n",num1,num2);
    }

    if( num1 != num2 )
    {
        printf("%d != %d is true\n",num1,num2);
    }




    //  if - else statements

    if( num1 < num2)
    {
       printf("num1 is less than num2\n");
    }
    else
    {
        printf("num1 is not less than num2\n");
    }



    // ==============if - else if - else if================
    num1 = 1;

    //  if - else if - else if
    if(num1 == 1)
    {
        printf("Value of num1 is one\n");
    }
    else if(num1 == 2)
    {
        printf("Value of num1 is two\n");
    }
    else if(num1 == 3)
    {
        printf("Value of num1 is three\n");
    }



    // ==============if - else if - else if - else================
    num1 = 46;

    //  if - else if - else if
    if(num1 == 1)
    {
        printf("Value of num1 is one\n");
    }
    else if(num1 == 2)
    {
        printf("Value of num1 is two\n");
    }
    else if(num1 == 3)
    {
        printf("Value of num1 is three\n");
    }
    else
    {
        printf("Value of num1 is not in range 1-3 \n");
    }





    printf("\n============= Program Ended ============\n");
    getch();

}