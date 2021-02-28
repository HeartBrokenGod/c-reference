#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n\n================= Star Pattern 1 Program ==================\n\n");
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    printf("\n");
    //  calling function starPattern1
    starPattern1(num);
    printf("\n\n================= Star Pattern 1 Program ==================\n\n");
    getch();
}


//  created separated function for printing pattern
void starPattern1(int num){

    //  this loop switches the line
    for(int linePosition = 0; linePosition < num; linePosition++){

        //  this loop switches the cursor Position
        for(int cursorPosition = 0; cursorPosition <= linePosition; cursorPosition++ ){

            //  printing logic
            //  print 1 star on line 1
            //  print 2 star on line 2
            //  and so on
            printf("* ");

        }

        //  this print switches the line actually
        printf("\n");
    }
}