// print the following 
//   *****     *****  
//  *******   ******* 
// ********* *********
// *******************
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *

#include<stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if(j >= 3-i+1 && j <= 3*2 + i)
            {
                printf("*");
            }
            else if(j >= 3+10-i+1 && j <= 3 * 2 + 10 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 19 - i + 1; j++)
        {
            if(j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
    
}