#include <stdio.h>
int main()
{
    int passes = 0;
    int failures = 0;
    int student = 0;
    int result;
    int grade;
    int Agrade, Bgrade, Cgrade, Dgrade, Fgrade;
    Agrade = Bgrade = Cgrade = Dgrade = Fgrade = 0;

    while (student < 20)
    {
        printf("Enter result (1=pass, 2=fail): ");
        scanf("%d", &result);

        if (result == 1)
        {
            passes += 1;
            printf("Enter your grade: ");
            scanf("%d", &grade);

            if (grade >= 90)
            {
                Agrade++;
            }
            else if (grade >= 80)
            {
                Bgrade++;
            }
            else if (grade >= 70)
            {
                Cgrade++;
            }
            else if (grade >= 60)
            {
                Dgrade++;
            }
            else
            {
                Fgrade++;
            }
        }
        else
        {
            failures += 1;
        }
        student += 1;
    }
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);
    printf("\nNumber of Students getting A grade: %d", Agrade);
    printf("\nNumber of Students getting B grade: %d", Bgrade);
    printf("\nNumber of Students getting C grade: %d", Cgrade);
    printf("\nNumber of Students getting D grade: %d", Dgrade);
    printf("\nNumber of Students getting F grade: %d", Fgrade);

    if (passes > 8)
    {
        printf("\nRaise tuition\n");
    }

    return 0;
}


