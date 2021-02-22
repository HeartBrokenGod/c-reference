#include<stdio.h>
#include<conio.h>

void main()
{

    int number;



    printf("Enter number : ");
    scanf("%d",&number);

    printf("\n");

    for( int i = 0; i < number; i++  )
    {
        for( int j = 0; j < number; j++  )
        {
            if( i == 0 || i == (number - 1) )
            {
                printf("%d",number);
            }
            else
            {
                if( j == 0 || j == (number - 1) )
                {
                    printf("%d",number);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }



    getch();
}



