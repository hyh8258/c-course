#include <stdio.h>

void modify_array(int array[])
{
    array[0] = 7;
    array[1] = 7;
    array[2] = 7;
}

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int main(void)
{
    printf("Creating an array ...\n");
    int array[3] = {0, 4, 9};
    int size = sizeof(array) / sizeof(array[0]);
    print_array(array, size);

    printf("Modifying array ...\n");
    modify_array(array);
    print_array(array, size);

    return 0;
}

