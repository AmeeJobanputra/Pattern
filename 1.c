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



















