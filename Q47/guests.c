#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct Guests
{
    char name[50];
    int status;
    int nights;
    float room_cost;
    float srv;
    float cost;
} G;

void options(G guest[]);
void check_in(G guest[]);
void check_out(G guest[]);
void request(G guest[]);
void printing(G guest[]);
void invoice(G guest[]);

void options(G guest[])
{
    int option;
    printf("\n\nMenu\n-----------\n");
    printf("1. Check in\n");
    printf("2. Services\n");
    printf("3. Invoice\n");
    printf("4. Check out\n");
    printf("5. Exit\n");
    printf("\nPlease Choose a Number According to the Option: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("\nCheck in\n-----------\n");
        check_in(guest);
        break;

    case 3:
        printf("\nInvoice\n-----------\n");
        invoice(guest);
        break;

    case 2:
        printf("\nRequest\n-----------\n");
        request(guest);
        break;

    case 4:
        printf("\nCheck out\n-----------\n");
        check_out(guest);
        break;

    case 5:
        exit(0);
        break;
    }
}

void check_in(G guest[])
{
    int i, choice, nights;
    printf("Rooms:\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Room No.%d\n", i + 1);
        printf("Room Cost: %.2f/night\n", guest[i].room_cost);
        printf("Status: ");
        if (guest[i].status == 0)
        {
            printf("Available\n");
        }
        else if (guest[i].status == 1)
        {
            printf("Unavailable\n");
        }
        printf("\n");
    }
    printf("*All services provided are for 1 guest only*\n\n");
    printf("Input Room No. for chosen room: ");
    scanf("%d", &choice);
    for (i = 0; i < 4; i++)
    {
        if (choice == i + 1 && guest[i].status == 0)
        {
            printf("\nYour name: ");
            scanf("%s", guest[i].name);
            printf("How many nights?: ");
            scanf("%d", &guest[i].nights);
            guest[i].status = 1;
            guest[i].cost = guest[i].room_cost * guest[i].nights;
            printf("\nYou've been checked in at Room %d!\n", i + 1);
        }
    }
    options(guest);
}

void check_out(G guest[])
{
    int i, room_no;
    printf("Input your room no.: ");
    scanf("%d", &room_no);
    for (i = 0; i < 4; i++)
    {
        if (room_no == i + 1 && guest[i].status == 1)
        {
            guest[i].status = 0;
            guest[i].cost = 0;
            guest[i].nights = 0;
            strcpy(guest[i].name, "BLANK");
        }
    }
    options(guest);
}

void request(G guest[])
{
    int option, i, room_no;
    printf("Input your room no.: ");
    scanf("%d", &room_no);
    for (i = 0; i < 4; i++)
    {
        if (room_no == i + 1)
        {
            printf("\n\n1. Request Breakfast\n");
            printf("2. Request Lunch\n");
            ;
            printf("3. Request Dinner\n");
            printf("4. Request Dry Cleaning\n");
            printf("5. Exit\n");
            printf("\nPlease Choose a Number According to the Option: ");
            scanf("%d", &option);
            switch (option)
            {
            case 1:
                guest[i].cost = guest[i].cost + 10;
                guest[i].srv = guest[i].srv + 10;
                printf("\nBreakfast requested!\n\n");
                break;

            case 2:
                guest[i].cost = guest[i].cost + 15;
                guest[i].srv = guest[i].srv + 15;
                printf("\nLunch requested!\n");
                break;

            case 3:
                guest[i].cost = guest[i].cost + 20;
                guest[i].srv = guest[i].srv + 20;
                printf("\nDinner requested!\n");
                break;

            case 4:
                guest[i].cost = guest[i].cost + 20;
                guest[i].srv = guest[i].srv + 20;
                printf("\nDry cleaning requested!\n");
                break;

            case 5:
                exit(0);
                break;
            }
        }
    }
    options(guest);
}

void printing(G guest[])
{
    int i, room_no;
    float tax = 0, serv_chrg = 50;
    FILE *fp;
    fp = fopen("Invoice.txt", "w");
    if (fp == NULL)
    {
        printf("Couldn't create file");
    }
    printf("\nInput your room no.: ");
    scanf("%d", &room_no);
    for (i = 0; i < 4; i++)
    {
        if (room_no == i + 1 && guest[i].status == 1)
        {
            guest[i].cost = guest[i].cost + (serv_chrg * guest[i].nights) + guest[i].srv;
            tax = (guest[i].cost * .14);
            guest[i].cost = guest[i].cost + tax;
            fprintf(fp, "Name: %s\n", guest[i].name);
            fprintf(fp, "Room No.: %d\n", i + 1);
            fprintf(fp, "--------------------------------\n");
            fprintf(fp, "Room Charge: %.2f\n", guest[i].room_cost * guest[i].nights);
            fprintf(fp, "Service Charge: %.2f\n", serv_chrg * guest[i].nights);
            fprintf(fp, "Other services: %.2f \n", guest[i].srv);
            fprintf(fp, "Room & Service Tax: %.2f\n", tax);
            fprintf(fp, "--------------------------------\n");
            fprintf(fp, "Total:\t%.2f \n", guest[i].cost);
        }
        tax = 0;
    }
    fclose(fp);
    printf("\nText file created!\n");
    options(guest);
}

void invoice(G guest[])
{
    int i, room_no, option;
    float tax = 0, serv_chrg = 50;
    printf("Input your room no.: ");
    scanf("%d", &room_no);
    for (i = 0; i < 4; i++)
    {
        if (room_no == i + 1 && guest[i].status == 1)
        {
            guest[i].cost = guest[i].cost + (serv_chrg * guest[i].nights) + guest[i].srv;
            tax = (guest[i].cost * .14);
            guest[i].cost = guest[i].cost + tax;
            printf("\nName: %s\n", guest[i].name);
            printf("Room No.: %d\n", i + 1);
            printf("--------------------------------\n");
            printf("Room Charge: %.2f\n", guest[i].room_cost * guest[i].nights);
            printf("Service Charge: %.2f\n", serv_chrg * guest[i].nights);
            printf("Other services: %.2f \n", guest[i].srv);
            printf("Room & Service Tax: %.2f\n\n", tax);
            printf("--------------------------------\n");
            printf("Total:\t%.2f \n", guest[i].cost);
        }
        tax = 0;
    }
    printf("\n1. Convert invoice to text file\n");
    printf("2. Return to Menu\n\n");
    printf("Choose a Number According to the Option: ");
    scanf("%d", &option);
    if (option == 1)
    {
        printing(guest);
    }
    else if (option == 0)
        ;
    {
        options(guest);
    }
}

int main()
{
    int i;
    G guest[4];
    printf("Pre-define data:\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Pre-define cost of Room %d: ", i + 1);
        scanf("%f", &guest[i].room_cost);
    }
    for (i = 0; i < 4; i++)
    {
        guest[i].status = 0;
        strcpy(guest[i].name, "BLANK");
        guest[i].nights = 0;
        guest[i].srv = 0;
    }
    options(guest);
    return 0;
}