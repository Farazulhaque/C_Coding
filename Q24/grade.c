#include <stdio.h>

int inputGrade();
float calculateGPA(int grade);
void printGPA(float gpa);

int main()
{
    int grade;
    do
    {
        grade = inputGrade();
        if (grade < 0 || grade > 100)
        {
            printf("Invalid grade. Please enter grade between 1-100.\n");
        }
    } while (grade < 0 || grade > 100);

    float gpa = calculateGPA(grade);
    printGPA(gpa);

    return 0;
}

int inputGrade()
{
    int grade;
    printf("Enter course grade(1-100): ");
    scanf("%d", &grade);
    return grade;
}

float calculateGPA(int grade)
{
    float gpa;
    if (grade >= 90 && grade <= 100)
    {
        gpa = 4.0;
    }
    else if (grade >= 85 && grade < 90)
    {
        gpa = 3.8;
    }
    else if (grade >= 80 && grade < 85)
    {
        gpa = 3.6;
    }
    else if (grade >= 75 && grade < 80)
    {
        gpa = 3.3;
    }
    else if (grade >= 70 && grade < 75)
    {
        gpa = 3.0;
    }
    else if (grade >= 65 && grade < 70)
    {
        gpa = 2.5;
    }
    else if (grade >= 60 && grade < 65)
    {
        gpa = 2.0;
    }
    else if (grade >= 55 && grade < 60)
    {
        gpa = 1.5;
    }
    else if (grade >= 50 && grade < 55)
    {
        gpa = 1.0;
    }
    else
    {
        gpa = 0.0;
    }
    return gpa;
}

void printGPA(float gpa)
{
    printf("The grade point is %.1f", gpa);
}
