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
        printf("Give student %d's info:\n", (i+1));

        getchar();

        printf("Enter name: ");
        gets(students[i].name);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);


        printf("Enter cgpa: ");
        scanf("%lf", &students[i].cgpa);
    }

    for(int i=0; i<n; i++)
    {
        printf("\n");
        printf("Student %d\n", (i+1));
        printf("Name: %s\n", students[i].name);
        printf("ID: %lld\n", students[i].id);
        printf("cgpa: %.3f", students[i].cgpa);

    }

    int sum = 0;
    float avg;

    for(int i=0; i<n; i++)
    {
        sum = sum + students[i].cgpa;
    }

    avg = sum/n;

    FILE *fp;
    fp = fopen("output.txt", "w");

    fprintf(fp, "Average CGPA of %d students: %d\n", n, avg);
    fclose(fp);

    printf("\nFile is written Successfully\n");

    return 0;
}
