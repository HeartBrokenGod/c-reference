#include<stdio.h>
#include<conio.h>

// function defination
// it means creating a function or writing a function as you want
/*
    return_type function_name ( parameters if any ){

        // write code which will execute when function is called

    }
*/

// this function having return type void and  function name is sanket
void sanket()
{

    // sanket function when called it will print the below message on the console window
    printf("Welcome everyone !!");

}


// creating another function which take two parameters of type int and return int
int sum(int x,int y)
{

    // we have to write return statement only when we specify the return type is other than void
    return ( x + y );

}



void main()
{

    // calling a function whose name is sanket
    sanket();

    // declaring a variable to catch the value returned from sum function
    int addition;

    // call the sum function
    // and catch the value returned from the addition
    addition = sum(4,9);


    // printing the addition
    printf("\nAddition of 4 and 9 is %d",addition);

    getch();

}
