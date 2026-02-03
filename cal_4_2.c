#include "calculator.h"

/*
   % = เปอร์เซ็นต์
   a % b = (a * b) / 100
*/
double calculate(double a, double b, char op, int *ok)
{
    *ok = 1;
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) { *ok = 0; return 0; }
            return a / b;
        case '%':
            return (a * b) / 100.0;
        default:
            *ok = 0;
            return 0;
    }
}