#include<stdio.h>
#include<string.h>

struct Student
{
    long long int id;
    char name[100];
    double cgpa;
};

int main(void)
{
    int n;
    printf("Enter number of student: ");
    scanf("%d", &n);

    struct Student students[n];

    for(int i=0; i<n; i++)
    {
        printf("Give stdent %d's info:\n", (i+1));

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        getchar();

        printf("Enter name: ");
        gets(students[i].name);

        printf("Enter cgpa: ");
        scanf("%lf", &students[i].cgpa);
    }

    for(int i=0; i<n; i++)
    {
        printf("\n");
        printf("Student %d\n", (i+1));
        printf("ID: %lld\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("cgpa: %.3f", students[i].cgpa);

    }

    return 0;
}
