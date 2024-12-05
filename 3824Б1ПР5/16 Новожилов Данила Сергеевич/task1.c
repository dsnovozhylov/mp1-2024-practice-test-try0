// Задача 1.a
#include <stdio.h>
#include <limits.h>

int safe_sum(int a, int b) {
    // Проверяем, есть ли риск переполнения
    if ((a > 0 && b > INT_MAX - a) || (a < 0 && b < INT_MIN - a)) {
        return (a > 0) ? INT_MAX : INT_MIN;
    }
    
    return a + b;
}

int main() {
    int a = 2000000000;
    int b = 1000000000;
    
    int result = safe_sum(a, b);
    
    printf("Сумма %d и %d равна %d\n", a, b, result);
    
    return 0;
}

// Задача 1.b
#include <stdio.h>
#include <limits.h>

int safe_sum(int a, int b) {
    if ((a < 0 && b < INT_MIN - a) || (a > 0 && b < INT_MIN - a)) {
        return INT_MIN;
    }
    
    return a + b;
}

int main() {
    int a = -2147483647;
    int b = -10;
    
    int result = safe_sum(a, b);
    
    printf("Сумма %d и %d равна %d\n", a, b, result);
    
    return 0;
}
int sum_of_two_numbers(int a, int b)
{
  return 0;
}
