#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer_choose();
int human_choose(int avoid);
int count_factors(int num);
int main()
{
    int comp_score = 0, human_score = 0;
    int comp_choice, human_choice;
    while (1)
    {
        // printf("helo");
        comp_choice = computer_choose();
        human_choice = human_choose(comp_choice);
        printf("%d", count_factors(human_choice));
        if (human_choice == 0)
        {
            printf("Your score: %d\n", human_score);
            printf("Computer score: %d\n", comp_score);
            exit(0);
        }
        else if (count_factors(human_choice) == count_factors(comp_choice))
        {
            printf("hello");
            human_score += 1;
        }
        else
        {
            printf("bye");
            comp_score += 1;
        }
    }
    return 0;
}
int computer_choose()
{
    // generate random number between 1 and 1000
    srand(time(0));
    int comp_num = rand() % 1000 + 1;
    return comp_num;
}

int human_choose(int avoid)
{
    int human_num;
    printf("Computer chose: %d\n", avoid);
    printf("Your choice? ");
    scanf("%d", &human_num);
    return human_num;
}

int count_factors(int num)
{
    int ctr = 0;
    int half_num = num / 2;
    for (int i = 0; i < half_num; i++)
    {
        if (half_num % i == 0 && i * i != half_num)
        {
            ctr += 2;
        }
        else if (i * i == half_num)
        {
            ctr++;
        }
    }
    printf("%d", ctr);
    return ctr;
}