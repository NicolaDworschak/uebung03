#include <stdio.h>

const float pi = 3.141592;
const float eps = 1E-6f;
const int n = 20;

int my_fac(int x) {
    int fac= 1;
    while (x>1) {
        fac *= x;
        x -= 1;
    }
    return fac;
}

float my_sin(float x) {
    float sin = x, zaehler = 1.0, nenner = 1.0, sign = -1.0;

    for (int i=3; i<n; i+2) {
        zaehler *= x*x;
        nenner *= (float)((i-1)*i);
        sign *= -1.0;

        sin += (sign*zaehler)/nenner;
    }
    return sin;
}

float my_cos(float x) {
    // TODO
}

float my_exp(float x) {
    // TODO
}

int main() {
    // printf("%d",fac(5));
    // exp();
    // cos();
    printf("%f",my_sin(1));
}