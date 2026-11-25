
#include "student.h"
void modify_student(SLL *ptr)
{
    SLL *temp;
    char ch, name[20];
    int roll;
    float percentage;
    printf("\nR/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);
    if (ch == 'R' || ch == 'r')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
    }
    else if (ch == 'N' || ch == 'n')
    {
        printf("Enter name: ");
        scanf("%s", name);
    }
    else if (ch == 'P' || ch == 'p')
    {
        printf("Enter percentage: ");
        scanf("%f", &percentage);
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }
    temp = ptr;
    while (temp)
    {
        if ((ch == 'R' || ch == 'r') && temp->rollno == roll)
            break;
        if ((ch == 'N' || ch == 'n') && strcmp(temp->name, name) == 0)
            printf("%d\t%s\t%.2f\n", temp->rollno, temp->name, temp->percentage);
        if ((ch == 'P' || ch == 'p') && temp->percentage == percentage)
            printf("%d\t%s\t%.2f\n", temp->rollno, temp->name, temp->percentage);
        temp = temp->next;
    }

    if (ch != 'R' && ch != 'r')
    {
        printf("Enter roll number to modify: ");
        scanf("%d", &roll);
        temp = ptr;
        while (temp)
        {
            if (temp->rollno == roll &&
                ((ch == 'N' || ch == 'n' && strcmp(temp->name, name) == 0) ||
                 (ch == 'P' || ch == 'p' && temp->percentage == percentage)))
                break;
            temp = temp->next;
        }
    }
    if (temp == NULL)
    {
        printf("Student not found!\n");
        return;
    }
    printf("\nCurrent Details:\n");
    printf("Roll No: %d\n", temp->rollno);
    printf("Name: %s\n", temp->name);
    printf("Percentage: %.2f\n", temp->percentage);
    printf("\nEnter new name: ");
    scanf("%s", temp->name);
    printf("Enter new percentage: ");
    scanf("%f", &temp->percentage);
    printf("Record modified successfully!\n");
}

