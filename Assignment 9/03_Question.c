// 3. Write a program which takes the day number of a week and displays a unique
// greeting message for the day.
#include<stdio.h>
int main()
{
    int dayNumber;
    printf("Enter the day number: ");
    scanf("%d",&dayNumber);

    switch(dayNumber)
    {
        case 1:
            printf("Good morning. I hope your morning is as bright as your smile.");
            break;
        case 2:
            printf("Use your eyes at see the possibilities, not the problems. Happy morning.");
            break;
        case 3:
            printf("Every day is a new opportunity to do better. Good morning");
            break;
        case 4:
            printf("Doing good for others is not a duty… it’s a joy. It increases your own health and happiness. Good morning.");
            break;
        case 5:
            printf("If you’re changing the world, you’re working on important things. You’re excited to get up in the morning. ");
            break;
        case 6:
            printf("Whatever you decide to do, make sure it makes you happy. Good morning!");
            break;
        case 7:
            printf("Carry a heart that never hates. carry a smile that never fades. Carry a touch that never hurts. Good morning.");
            break;
        default:
            printf("Enter the valid value (1 to 7)");
            break;
    }
    return 0;
}