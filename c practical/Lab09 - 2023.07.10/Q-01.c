#include <stdio.h>
int main()
{
    int array[10], i, max, min, total = 0, reverse;
    float avg;
    //...For loop, for input 10 values on array
    for (i = 0; i < 10; i++)
    {
        printf("Enter the %d number:", i + 1);
        scanf("%f", &array[i]);
        total += array[i];
    }
    avg = total / 10;
    max = array[0];
    min = array[0];
    for (i = 0; i < 10; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("max: %d\n min: %d\n avg: %.2f\n total: %.d", max, min, avg, total);

    for (i = 9; i >= 0; i--)

        printf("%d\n", array[i]);
}