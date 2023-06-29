#include <stdio.h>

int main(void) {
    float a, b, sum;
    printf("Input two floats :");
    scanf("%f%f", &a, &b);
    printf("a=%f, b=%f \n",a,b);
    sum = a+b;
    printf("sum = %f\b\b", sum);
    return 0;
}
