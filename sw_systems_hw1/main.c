#include <stdio.h>
#include "myMath.h"

int main() {

    // input variable
    double x;
    
    // function 1
    // get x from user
    printf("\nPlease inset a real number: ");
    scanf("%lf",&x);

    int round1 = (int)(x);
    double ex = Exponent(round1);
    double power1 = Power(x, 3);
    float a1 = add(ex, power1);
    float res1 = sub(a1, 2.0);

    // print result of function 1
    printf("\nThe value of f(x) = e^x + x^3 − 2 at the point %lf is %.4f\n", x ,res1);

    // function 2

    double a2 = mul(x, 3);
    double power2 = Power(x, 2);
    double b2 = mul(power2, 2);
    float res2 = add(a2, b2);

    // print result of function 2
    printf("The value of f(x) = 3x + 2x^2 at the point %lf is %.4f\n", x ,res2);

    // function 3

    double power3 = Power(x, 3);
    double a3 = mul(power3, 4);
    double div3 = div(a3, 5);
    double b3 = mul(x, 2);
    float res3 = sub(div3, b3);

    // print result of function 3
    printf("The value of f(x) = (4x^3) / 5 - 2x at the point %lf is %.4f\n", x ,res3);

    return 0;
}