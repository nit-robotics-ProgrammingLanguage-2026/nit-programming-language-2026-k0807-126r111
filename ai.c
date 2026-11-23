
#include <stdio.h>
#include <math.h>
#include <complex.h>

void to_polar(double x, double y, double *r, double *theta)
{
    double complex z = x + y * I;
    *r = cabs(z);
    *theta = carg(z) * 180.0 / acos(-1.0);
}

int main(void)
{
    double x, y, r, theta;
    scanf("%lf %lf", &x, &y);
    to_polar(x, y, &r, &theta);
    printf("%.3f,%.2f", r, theta);
    return 0;
}
