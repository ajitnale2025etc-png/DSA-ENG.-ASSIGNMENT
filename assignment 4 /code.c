#include <stdio.h>

struct student
{
    int roll;
    char name[80];
    float SGPA;
};

void create(struct student arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter roll no, name and SGPA: ");
        scanf("%d %s %f", &arr[i].roll, arr[i].name, &arr[i].SGPA);
    }
}

void display(struct student arr[], int n)
{
    printf("\nStudent Details:\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nRoll No: %d", arr[i].roll);
        printf("\nName: %s", arr[i].name);
        printf("\nSGPA: %.2f\n", arr[i].SGPA);
    }
}

void search(struct student arr[], int n)
{
    int roll;

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(arr[i].roll == roll)
        {
            printf("\nStudent found!\n");
            printf("Roll No: %d\n", arr[i].roll);
            printf("Name: %s\n", arr[i].name);
            printf("SGPA: %.2f\n", arr[i].SGPA);
            return;
        }
    }

    printf("\nStudent not found.\n");
}

int main()
{
    struct student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    create(s, n);
    display(s, n);
    search(s, n);

    return 0;
}
