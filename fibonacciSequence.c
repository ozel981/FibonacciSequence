#include <stdio.h>
#include <stdlib.h>

#define LENGTH 60

unsigned long long* sequence;

unsigned long long GetFibVal(int number)
{
    switch (number)
    {
    case 1: return sequence[number - 1];
    case 2: return sequence[number - 1];
    default:
    {
        if (sequence[number - 1] != 0) return sequence[number - 1];
        else return (sequence[number - 1] = GetFibVal(number - 2) + GetFibVal(number - 1));
    }
    }
}

int main()
{
    sequence = (unsigned long long*) malloc(LENGTH * sizeof(unsigned long long));
    for (int i = 0; i < LENGTH; ++i) {
        sequence[i] = 0;
    }
    sequence[1] = 1;

    if (sequence == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    int number;

    printf("Get sequence number [1,%d]:", LENGTH);
    scanf("%d", &number);

    if (number < 1 || number > LENGTH)
    {
        printf("Error! Incorrect sequence number [1,%d]", LENGTH);
        exit(0);
    }

    printf("%llu \n", GetFibVal(number));
    printf("fibonacciSequence \n");
    printf("Wojciech Podmok³y \n");
    printf("Grupa dziekanska 2.3");

    free(sequence);
    return 0;
}
