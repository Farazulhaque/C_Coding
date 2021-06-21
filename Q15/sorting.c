#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//initialize main
int main(int argc, char *argv[])
{
    //define variables
    int numArray[10];
    int loopA, loopB;
    int tempVar;

    //to generate 10 random numbers in the array
    for (loopA = 0; loopA < 10; loopA++)
    {
        //generate random values between 1 to 100
        //store numbers in variable numArray
        numArray[loopA] = 1 + rand() % 100;
    }

    //sort array based on entry
    // if argument is -a or -A sort ascending
    if ((strcmp(argv[1], "-a") == 0) ||
        (strcmp(argv[1], "-A") == 0))
    {
        //loop for sorting array
        for (loopA = 0; loopA <= 8; loopA++)
        {
            //sort array from 0 to 8
            for (loopB = 0; loopB <= 8 - loopA; loopB++)
            {
                // compare the values stored in numArray
                if (numArray[loopB] > numArray[loopB + 1])
                {
                    //numArray assigned to tempVar
                    tempVar = numArray[loopB];
                    numArray[loopB] = numArray[loopB + 1];
                    //tempVar assigned to numArray
                    numArray[loopB + 1] = tempVar;
                }
            }
        }
    }

    //if argument is -d or -D
    else if ((strcmp(argv[1], "-d") == 0) ||
             (strcmp(argv[1], "-D") == 0))
    {
        // loop for sorting array
        for (loopA = 0; loopA <= 8; loopA++)
        {
            //sort array from 0 to 8
            for (loopB = 0; loopB <= 8 - loopA; loopB++)
            {
                // compare values stored in numArray
                if (numArray[loopB] < numArray[loopB + 1])
                {
                    //numArray is assigend to tempVar
                    tempVar = numArray[loopB];
                    numArray[loopB] = numArray[loopB + 1];
                    //tempVar is assigned to numArray
                    numArray[loopB + 1] = tempVar;
                }
            }
        }
    }
    //print stored array
    printf("\n\nThe sorted array is: \n");
    //loop to print every element of array
    for (loopA = 0; loopA < 10; loopA++)
    {
        //Display output
        printf("%d\t", numArray[loopA]);
    }
}