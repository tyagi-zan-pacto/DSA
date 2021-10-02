/*
 * A Program to Demonstrate the use of Structures in C Language
 * C being an Imperative Language does not have classes to store various data types
 * Author  Krishna Pai
 * Date    1-Oct-2021
 */

#include <stdio.h>
#include <string.h>

typedef struct member
{
    char name[15];
    int age;
    char addrs[100];
    int active;
    int status;
    char wife[15];
    int children;
    char child[4][15];
} mem;

int input(mem num[10], int total);
void list(mem num[10], int total);
int marital(int n);

int main()
{
    mem number[10];
    int total, i;
    printf("Enter total number of members: ");
    scanf("%d", &total);
    input(number, total);
    list(number, total);

    return 0;
}
int input(mem num[10], int n)
{
    int i = 0, mar, j = 0, k;
    for (i = 0; i < n; i++)
    {
        printf("member %d NAME: ", i + 1);
        scanf("%s", &num[i].name);

        printf("Enter AGE: ");
        scanf("%d", &num[i].age);
        getchar();
        printf("Enter ADDRESS:\n");
        gets(num[i].addrs);

        printf("Are you an active member?\n");
        printf("Enter 1 if YES, and 0 if NO: ");
        scanf("%d", &num[i].active);
        printf("Martital status:\n");
        printf("Enter 1 if married, and 0 if NOT: ");
        scanf("%d", &num[i].status);

        if (num[i].status == 1)
        {
            printf("Enter spouse name: ");
            scanf("%s", &num[i].wife);
            printf("Number of children: ");
            scanf("%d", &num[i].children);
            for (j = 0, k = 0; j < num[i].children; j++, k++)
            {
                printf("Enter name of child %d: ", k + 1);
                scanf(" %s", &num[i].child[j]);
            }
        }
        printf("_ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _\n\n");
    }
}
void list(mem num[10], int total)
{
    int i, k;
    printf("Below is the list of active members and their data:\n");
    for (i = 0; i < total; i++)
    {
        if (num[i].active == 1)
        {
            printf("Member %d: Name: %s \t\tAge: %d\n", i + 1, num[i].name, num[i].age);
            printf("Marital Status: ");
            marital(num[i].status);
            printf("   \tAddress: %s\n", num[i].addrs);
            printf("Name of spouse: %s\t\tNo. of Children: %d \n", num[i].wife, num[i].children);
            if (num[i].children > 0)
            {
                printf("Names of children: ");
                for (k = 0; k < num[i].children; k++)
                {
                    printf(" %s ", num[i].child[k]);
                }
            }
            printf("\n\n");
        }
        printf("_ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _\n");
    }
    
}
int marital(int n)
{
    int i;
    if (n == 1)
        printf("Married");
    else
        printf("NOT Married");
}
