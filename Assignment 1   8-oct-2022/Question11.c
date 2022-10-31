//  WAP to take time as an input in below given format and convert the time format and
// display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
// Example –
// “11:25” converted to “11 Hour and 25 Minute”

#include <stdio.h>
#include <string.h>
int main()
{
    char time[5];
    gets(time);

    int i = 0;
    while (time[i] != ':' && i < strlen(time))
    {
        printf("%c", time[i]);
        i++;
    }
    i++;
    printf(" Hour and ");
    while (time[i] != ':' && i < strlen(time))
    {
        printf("%c", time[i]);
        i++;
    }
    printf(" Minute");
}