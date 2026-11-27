#include <stdio.h>

// this doesn't work, beacuse number is passed by value
void square_broken(int number)
{
    number = number * number;
    printf("Inside the broken function: Number = %d\n", number);
}

// this works, because the number is passed by REFERENCE
void square_working(int *number)
{
    int actual_value = *number;
    *number = actual_value * actual_value;
    printf("Inside the working function: Number = %d\n", *number);
}

int main(void)
{
    int number = 6;

    square_broken(number);
    printf("After passing by value: Number = %d\n", number);

    square_working(&number);
    printf("After passing by reference: Number = %d\n", number);
    
    return 0;
}

