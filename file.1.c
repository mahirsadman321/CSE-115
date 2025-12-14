#include <stdio.h>

int main(void)
{
    FILE *fp;
    int id, marks;
    fp = fopen("students.txt", "w"); // open for writing
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter ID and marks of 3 students:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &id);
        printf("Marks: ");
        scanf("%d", &marks);
        fprintf(fp, "%d %d\n", id, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading from file:\n");
    while (fscanf(fp, "%d %d", &id, &marks) != EOF)
    {
        printf("Student ID: %d got Marks: %d\n", id, marks);
    }
    fclose(fp);
    return 0;
}
