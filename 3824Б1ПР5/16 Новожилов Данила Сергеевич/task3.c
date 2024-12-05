// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
  return 0.0;
}
#include <stdio.h>

double max_of_two_numbers(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double a = 3.14;
    double b = 6.28;
    
    double result = max_of_two_numbers(a, b);
    
    printf("Максимум из %.2f и %.2f равен %.2f\n", a, b, result);
    
    return 0;
}
