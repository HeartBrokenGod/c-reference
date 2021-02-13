#include<stdio.h>
#include<conio.h>

void main()
{

/*     Every program in the world can provide User Interface (UI)
 *     CLI or GUI
 *
 *     CLI(Command Line Interface) :
 *
 *     It is Simply Called Black Screen Window (can be called as Console)
 *     with three buttons on top corner.
 *
 *     How User interact with Console window :
 *         User Can See the Output From the Console.
 *         User Can Input the Values To The Console.
 */

    //  Console Output


    //  for showing some message to user
    //  we call printf() function
    //  Any text inside double inverted commas of printf function will be printed on console window as it is
    printf("Hello User");

    //  Only characters starting with '\' and '%' will not be printed on console as these have special meaning
    //  eg. '\n' switches the cursor to next line , it will not print '\n' on console
    printf("\n");

    //  the characters starting with '\'(backslash) are known as escape sequences

    //  '\t' for tab(which is equivalent to four WhiteSpace Character)
    //  '\r' Carriage Return



    //  the characters starting with '%' are known as format specifiers
    //  format specifiers are replaced by values while printing
    printf("On this line format specifier %d is replaced by value.",956);

    //  '%d' for int
    //  '%f' for float
    //  '%c' for character



    //  Console Input

    //  User can give input to the program using console
    //  In order to tell console to listen to user input and set that value to an variable
    //  we call function scanf()

    //  suppose we want to take a number from user and use that value to calculate its square and then print its square

    //  create a variable where we will store value which user will type
    int num;


    //  First we will give message to user to enter a number
    printf("\nEnter a number : ");

    //  Second we will tell console to listen to user input
    //  format specifier will specify that in which format input data to be interpreted

    scanf("%d",&num);

    //  program will temporary stop due to scanf() listening to user input from the console
    //  program will resume only when user type "ENTER KEY" and scanf() listens to it
    //  then scanf() will put the value user entered to the second parameter specified, in this case -> &num
    //  then the program continues

    printf("Square of %d is %d", num, num*num );


    getch();

}