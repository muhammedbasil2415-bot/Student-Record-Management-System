
#include "student.h"

void add_student(SLL **ptr)
{
    SLL *new, *last, *temp;
    int roll;
    new = malloc(sizeof(SLL));
    printf("Enter name and percentage: ");
    scanf(" %49[^\n]", new->name);
    scanf("%f", &new->percentage);
    roll = 1;
    temp = *ptr;
    while (temp)
    {
        if (temp->rollno >= roll)
            roll = temp->rollno + 1;
        temp = temp->next;
    }
    new->rollno = roll;
    new->next = 0;
    if (*ptr == 0)
        *ptr = new;
    else
    {
        last = *ptr;
        while (last->next)
        last = last->next;
        last->next = new;
    }
    printf("Student added, Roll No: %d\n", roll);
}

