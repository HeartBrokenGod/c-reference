#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n\n================= Number Pattern 1 Program ==================\n\n");
    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    printf("\n");
    //  calling function numbrPattern1
    numberPattern1(num);
    printf("\n\n================= Number Pattern 1 Program ==================\n\n");
    getch();
}


//  created separated function for printing pattern
void numberPattern1(int num){

    for( int i = 0; i < num; i++  )
    {
        for( int j = 0; j < num; j++  )
        {
            printf("%d ",num);

        }
        printf("\n");
    }
}
