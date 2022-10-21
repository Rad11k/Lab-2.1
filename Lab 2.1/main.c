#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main()
{
    double x;
    double y;

        printf("Enter x:");
        scanf("%lf", &x);

    if( 0<=x && x < 3)
    y = 1/2*cos(x/2)-1/(x*x)*sin(2*x);

    else if ( x <= 7 && x < 10 )
        y = 4-(x*x);

    else if ( x <= 10 && x < 30 )
        y = 10/x+(x*x);

    else
        y = 2.0;


    system("cls");

        printf("x = %lf", x);
        printf(" \ny = %lf", y);

 return 0;
}
