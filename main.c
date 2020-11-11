#include <stdio.h>
#include "myMath.h"

int main() {

    // input variables
    double x1, x2, x3;
    
    // function 1
    // get x1 from user
    printf("\n1. please enter x to calculate the function: e^x + x^3 - 2: ");
    scanf("%lf",&x1);

    
    int round1 = (int)(x1);
    double ex = Exponent(round1);
    double power1 = Power(x1, 3);
    float a1 = add(ex, power1);
    float res1 = sub(a1, 2.0);

    // print result of function 1
    printf("\nresult: %.4f\n", res1);

    // function 2
    // get x2 from user
    printf("\n2. please enter x to calculate the function: 3x + 2x^2: ");
    scanf("%lf",&x2);

    double a2 = mul(x2, 3);
    double power2 = Power(x2, 2);
    double b2 = mul(power2, 2);
    float res2 = add(a2, b2);

    // print result of function 2
    printf("\nresult: %.4f\n", res2);

    // function 3
    // get x3 from user
    printf("\n3. please enter x to calculate the function: (4x^3) / 5 - 2x): ");
    scanf("%lf",&x3);

    double power3 = Power(x3, 3);
    double a3 = mul(power3, 4);
    double div3 = div(a3, 5);
    double b3 = mul(x3, 2);
    float res3 = sub(div3, b3);

    // print result of function 3
    printf("\nresult: %.4f\n\n", res3);

    return 0;
}