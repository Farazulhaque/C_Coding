#include <stdio.h>

int main(){
    char x[40], i;
    printf("Enter a string of 39 characters or less: ");
    scanf("%s", x);
    printf("The entered character string is ");
    for (i = 0; x[i] != '\0'; i++)
        printf("%c", x[i]);
}

// #include <stdio.h>

// int main()
// {
//     char x[40], i, count = 0;
//     printf("Enter a string of 39 characters or less: ");
//     scanf("%s", x);
//     for (i = 0; x[i] != '\0'; i++)
//     {
//         printf("%c", x[i]);
//         count++;
//     }
//     printf(" is %d characters", count);
// }

// #include <stdio.h>

// int main()
// {
//     char x[40], i;
//     printf("Enter a string of 39 characters or less: ");
//     scanf("%s", x);
//     for (i = strlen(x)-1; x[i] != '\0'; i--)
//     {
//         printf("%c", x[i]);
//     }
// }



