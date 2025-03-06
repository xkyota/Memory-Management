#include <stdio.h> 

float average(int* array, int len);
void fun(int *value); 

int main(void)
{
    int array_0[] = {1, 20, 3, 4, 50, 6, 7, 80, 9, 10};
    int val = 10;

    fun(&val);
    printf("%d \n", val);

    printf("%f \n", average(array_0, 10));
}

float average(int* array, int len)
{
    int sum_0 = 0;
    int sum_1 = 0;
    int i; 

    for (i = 0; i < len; i++)
    {
        sum_0 += *array++; 
    }
    return sum_0 / len; 
}

void fun(int *value)
{
    *value = *value + 10; 
}