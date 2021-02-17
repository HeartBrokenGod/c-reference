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


    //================  Arithematic operators   ==============

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




    //  ==========  Comparison / Relational Operators   ========
    int result;

    //  '=='(Equal to Operator)
    result = num1 == num2 ;
    printf("%d == %d : %d\n",num1,num2,result);


    //  '!='(Not Equal to Operator)
    result = num1 != num2 ;
    printf("%d != %d : %d\n",num1,num2,result);


    //  '>'( Greater Than Operator)
    result = num1 > num2 ;
    printf("%d > %d : %d\n",num1,num2,result);


    //  '<'( Less Than Operator)
    result = num1 < num2 ;
    printf("%d < %d : %d\n",num1,num2,result);


    //  '>='( Greater Than Equals To Operator)
    result = num1 >= num2 ;
    printf("%d >= %d : %d\n",num1,num2,result);


    //  '<='( Less Than Equals To Operator)
    result = num1 <= num2 ;
    printf("%d <= %d : %d\n",num1,num2,result);


    //  ==========  Logical Operators   ========

    //  '&&' Logical AND
    result = 0 && 1 ;
    printf("0 && 1 : %d\n",result);


    //  '||' Logical OR
    result = 0 || 1 ;
    printf("0 || 1 : %d\n",result);

    //  '!' Logical NOT
    result = !1 ;
    printf("!1 : %d\n",result);





    //  ==========  Bitwise Operators   ========

    //  '&' Bitwise AND
    result = 13 & 36 ;
    printf("13 & 36 : %d\n",result);

    //  '|' Bitwise Or
    result = 0b00001101 | 0b00100100 ;
    printf("13 | 36 : %d\n",result);

    //  '<<' Bitwise Leftshift
    num1 = 3;
    result = num1 << 2 ;
    printf("%d << 2 : %d\n",num1,result);


    //  '>>' Bitwise Rightshift
    result = num1 >> 2 ;
    printf("%d >> 2 : %d\n",num1,result);



    getch();


}
