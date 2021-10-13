#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define REPETITION 10
#define NAME "SMITH"            // change this for name change
#define LABSECTION "LABSECTION" // change this for labsection change

void shuffleArray(int *numArray, const int arrayLength);
void printArray(int *numArray, const int arrayLength);
void initializeArray(int *numArray, const int arrayLength);
int comparisonFunction(const void *a, const void *b);
void reverseSort(int *numArray, const int arrayLength);

void printInfoMessage()
{
    printf("Name : %s\n", NAME);
    printf("Lab Section : %s\n", LABSECTION);
    printf("This program will :\n");
    printf("1. print an array of integers from 1 to N in increasing order.\n");
    printf("2. shuffle and print a permutation of array numbers.\n");
    printf("3. sort and print the array in decreasing order.\n");
    printf("4. Repeat the above steps %d times\n\n", REPETITION);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("\nNeed to pass Seed and Array Size as command line params.\n");
        exit(1);
    }
    int seed = atoi(argv[1]);
    int N = atoi(argv[2]);
    if (N < 1)
    {
        printf("Array size should be greater than 0.");
        exit(1);
    }
    srand(seed);
    int *numbers = malloc(sizeof(int) * N);
    if (numbers == NULL)
    {
        printf("Error allocating memory!");
        exit(1);
    }
    printInfoMessage();
    int i = 0;
    for (i; i < REPETITION; i++)
    {
        initializeArray(numbers, N);
        printf("Array in increasing order:\n");
        printArray(numbers, N);
        shuffleArray(numbers, N);
        printf("Shuffled Array :\n");
        printArray(numbers, N);
        printf("Array in decreasing order:\n");
        reverseSort(numbers, N);
        printArray(numbers, N);
        printf("\n");
    }
    return 0;
}

void shuffleArray(int *numArray, const int arrayLength)
{
    // shuffles the array of n elements (indices 0..n-1)
    int i = arrayLength - 1;
    int j, temp;
    while (i > 0)
    {
        j = rand() % (i + 1);
        // swap elements of array
        temp = numArray[i];
        numArray[i] = numArray[j];
        numArray[j] = temp;
        i--;
    }
}

void printArray(int *array, const int length)
{
    int i = 0;
    for (i; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void initializeArray(int *numArray, const int arrayLength)
{
    int i;
    for (i = 0; i < arrayLength; i++)
    {
        numArray[i] = i + 1;
    }
}

int comparisonFunction(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void reverseSort(int *numArray, const int length)
{
    qsort(numArray, length, sizeof(int), comparisonFunction);
}