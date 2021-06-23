#include <stdio.h>
#include <stdlib.h>

void readFile(FILE *fp);
int main()
{
    char ch, file_name[25], dataToAppend[1000];
    FILE *fp;

    printf("Enter name of a file you wish to see: ");
    gets(file_name);

    // Open file to read
    fp = fopen(file_name, "r");

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    // Print contents of the file
    printf("The contents of %s file are:\n", file_name);
    // Call function readFile to read a file
    readFile(fp);

    // close a file
    fclose(fp);

    // Gets input data to append to a file
    printf("\n\nEnter data to append: \n");
    fflush(stdin); // To clear extra white space characters in stdin
    fgets(dataToAppend, 1000, stdin);

    // Open in append mode
    fp = fopen(file_name, "a");
    /* Append data to file */
    fputs(dataToAppend, fp);
    /* Reopen file in read mode to print file contents */
    fp = freopen(file_name, "r", fp);

    /* Print file contents after appending string */
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fp);

    /* Done with file, hence close file. */
    fclose(fp);
    return 0;
}

void readFile(FILE *fp)
{
    char ch;

    do
    {
        ch = fgetc(fp);
        putchar(ch);

    } while (ch != EOF);
}

// #include <stdio.h>
// #include <stdlib.h>

// void readFile(FILE *fp);
// int main(int argc, char *argv[])
// {
//     char ch, file_name, dataToAppend[1000];
//     FILE *fp;

//     if (argc == 2)
//     {
//         file_name = argv[1];
//         // printf("Enter name of a file you wish to see: ");
//         // gets(file_name);

//         fp = fopen(file_name, "r"); // read mode

//         if (fp == NULL)
//         {
//             perror("Error while opening the file.\n");
//             exit(EXIT_FAILURE);
//         }

//         printf("The contents of %s file are:\n", file_name);

//         while ((ch = fgetc(fp)) != EOF)
//             printf("%c", ch);
//         fclose(fp);

//         printf("\n\nEnter data to append: \n");
//         fflush(stdin); // To clear extra white space characters in stdin
//         fgets(dataToAppend, 1000, stdin);

//         fp = fopen(file_name, "a");
//         /* Append data to file */
//         fputs(dataToAppend, fp);
//         /* Reopen file in read mode to print file contents */
//         fp = freopen(file_name, "r", fp);

//         /* Print file contents after appending string */
//         printf("\nSuccessfully appended data to file. \n");
//         printf("Changed file contents:\n\n");
//         readFile(fp);

//         /* Done with file, hence close file. */
//         fclose(fp);
//     }
//     else
//     {
//         printf("Usage: ./a.out filename");
//     }

//     return 0;
// }

// void readFile(FILE *fp)
// {
//     char ch;

//     do
//     {
//         ch = fgetc(fp);

//         putchar(ch);

//     } while (ch != EOF);
// }
