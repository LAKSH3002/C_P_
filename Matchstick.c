 #include<stdio.h>
#include<conio.h>
int main()
{
    printf("LETS PLAY A GAME\n");
    printf("THERE ARE 21 MATCHSTICKS\n");
    printf("YOU CAN CHOOSE 1,2,3 OR 4\n");
    printf("AFTER YOUR CHOICE COMPUTER WILL MAKE ITS CHOICE\n");
    printf("THE ONE WHO GETS TO CHOOSE IN LAST WILL LOOSE THE GAME\n");
    int match_sticks = 21, user_choice, computer_choice;
    while(match_sticks>=1) // 21 16 11 6
    {
        printf("Total Match Sticks: %d\n", match_sticks); //21 16 11 6
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &user_choice);// 4 2 4 3
 if(user_choice>4)
        {
            printf("Invalid Entry");
            break;
        }
        // for computer choice we are taking maximum value by which we can get the max possible value of sticks which is 5
        computer_choice = 5 - user_choice; // 1 2 1 2
        printf("Computer picks up the %d match sticks.\n", computer_choice);// comp choice is 1.
        match_sticks = match_sticks-user_choice-computer_choice; // 16 11 6 1
        if(match_sticks==1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }
    return(0);
}