#include "myMath.h"

// define E as euler number
#define E 2.71828182846

// returns E ^ x
double Exponent(int x) {
    double e = E;
    return Power(e,x);
}

// returns x ^ y
double Power(double x, int y) {

    // if x is negative change to positive
    // and in the and of the program calculate 1 / ans
    int negative = 0;
    if(y < 0) {
        y = y * (-1);
        negative = 1;
    }

    // ans is the answer the function returns
    // i is counts how much times to multiply
    double ans = 1;
    int i = 1;
    while(i <= y) {
        ans = ans * x;
        i++;
    }

    if(negative) {
        ans = 1 / ans;
    }

    return ans;
}