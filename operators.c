#include<stdio.h>
#include<conio.h>

void main()
{

    int num1 ;
    int num2 ;
    int addition;
    int substraction;
    int multiply;
    float div;

    printf("Enter a number : ");
    scanf("%d",&num1);

    printf("Enter another number : ");
    scanf("%d",&num2);


    //  arithematic operators

    //  plus operator
    addition = num1 + num2 ;

    //  minus operator
    substraction = num1 - num2 ;

    //  multiply operator
    multiply = num1 * num2 ;


    printf("Addition is %d\n",addition);
    printf("Substraction is %d\n",substraction);
    printf("Multiplication is %d\n",multiply);


    //  division operator
    div = ( num1 * 1.0f ) / num2 ;

    printf("Division is %f\n",div);


    getch();


}