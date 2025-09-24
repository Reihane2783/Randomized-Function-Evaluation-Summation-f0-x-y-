#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Function prototype
double f(int x, int y);

int main()
{
    double sum = 0;

    // Loop from -10 to 10 and accumulate the result of the expression
    for (int i = -10; i <= 10; i++)
    {
        sum += f(i, i + 1) / (5 + f(2 * i, i));
    }

    printf("The result is %f\n", sum);
    return 0;
}

// Function f(x, y) generates a random number z between x and y,
// then computes the expression: sqrt( |x - y|^(1/3) + (y - z)^2 )
double f(int x, int y)
{
    double z = 0, p;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random integer z between x and y (inclusive)
    if (x <= y)
        z = (rand() % (y - x + 1)) + x;
    else
        z = (rand() % (x - y + 1)) + y;

    // Compute the expression
    p = sqrt(pow(abs(x - y), 1.0 / 3.0) + pow((y - z), 2));

    return p;
}
