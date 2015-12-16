/*
 * Calculate pi as the limit of a perimeter of a regular polygon
 * inscribed in a unit circle as the number of polygon's sides grows
 * doubling at each iteration.
 */
#include <stdio.h>
#include <math.h>

#define N 28

int main() 
{
    //initializing variables
    int i;
    long n;
    double s, p;

    i = 0;
    n = 2;
    s = sqrt(1.);
    p = n/s;
    printf("%3d   %10ld   %.14f    % .14f    % .14f\n", i, n, s, p, M_PI-p);
    
    //loop for doubling n and calculating pi
    for(i = 1; i < N; i++) 
    {
        s = sqrt((2 * s * s) + (2 * sqrt (( s * s * s * s) - (s * s))));
        n *= 2;
        p = n/s;
        printf("%3d   %10ld   %.14f    % .14f    % .14f\n", i, n, s, p, M_PI-p);
    }

    return(0);
}
