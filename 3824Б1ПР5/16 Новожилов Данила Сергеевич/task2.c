// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  return 0;
}
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    // Проверим, можем ли мы безопасно умножить эти числа
    if (a != 0 && b > UINT_MAX / a) {
        return UINT_MAX;
    }
    
    return a * b;
}

int main() {
    unsigned int a = 4294967295U; // Максимальное значение для uint32_t
    unsigned int b = 2;
    
    unsigned int result = product_of_two_numbers(a, b);
    
    printf("Произведение %u и %u равно %u\n", a, b, result);
    
    return 0;
}
