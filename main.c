/*
*   FileName    :   main.c
*   Purpose     :   To house the main function of Tic Tac Toe Project
*   Author      :   Divyansh Bhardwaj, Technical Trainer, GLAU
*   Operating System    :   Ubuntu 18.10, 64 Bit
*   Compiler    :   GCC 8.2.0 x86_64 GNU
*/
#include <stdio.h>
#include <stdlib.h>

void show_board(void);  //  this function will show the current board to the user.

int main(void)
{
    system("clear");    // this statement is OS dependent
    //  this only works on LInux
    //  for Windows OS try,
    //  system("cls");

    //  print the welcome message to the user
    printf("\t-\t-\tWelcome to GLA's Tic-Tac-Toe\t-\t-\t\n");

    //  show the board to the user
    show_board();

    return 0;
}

void show_board(void)
{
    char user_choice = ' '; //  to hold the char of user's choice ['O' or 'X']
    int i = 0, j = 0;  //  variables for loop
    //  the tic-tac-toe board looks like a 3x3 matrix

    //  I'm going to print 3 boxes with allowance for a 3-width char
    for ( i = 0 ; i < 3 ; i++ )
    {
        for ( j = 0 ; j < 3 ; j++ )
        {
            printf("\t|\t%3c\t|", user_choice);
        }
        printf("\n\n");
    }


}
