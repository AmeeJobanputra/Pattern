//factors of negative///
/*#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int num, i;
    printf("Enter a negative number: ");
    scanf("%d", &num);

    // check if the input is zero
    if (num == 0)
    {
        printf("zro has infinite factors\n");
        exit(0);
    }

    // convert the input to its absolute value
    else{
    num = abs(num);

    printf("Factors of -%d are: ", num);

    // use a for loop to find the factors
    for (i = 1; i <= num; i++)
    {
        // check if the input is divisible by i
        if (num % i == 0)
        {
            // print i and its negative counterpart as factors
            printf("%d, -%d,", i, i);
        }
        getch();
    }
}

    return 0;
} */


/*#include <stdio.h>
#include <conio.h>

int main() {
    int i, j;

    // Print triangle pattern
    for (i = 1; i <=5; i++) { // Loop for rows
        for (j = 1; j <=5; j++) { // Loop for columns (grid width = 9)
            if (j<=i) { // Bounds for the triangle
                 // Alternate stars and spaces
                    printf("*");
                } 
             else {
                printf(" "); // Outside the bounds, print spaces
            }
        }
        
        printf("\n");
    }

    getch();
    return 0;
} */

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j,rows;

      printf("rows ");
      scanf("%d", &rows);
    // Print triangle pattern
    for (i = 1; i <=rows; i++) { // Loop for rows
        for (j = 1; j <=rows; j++) { // Loop for columns (grid width = 9)
            if (j<=i) { // Bounds for the triangle
                 // Alternate stars and spaces
                    printf("*");
                } 
             else {
                printf(" "); // Outside the bounds, print spaces
            }
        }
        
        
        
        
        
        
        printf("\n");
    }

    getch();
    return 0;
}


















