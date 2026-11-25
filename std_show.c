#include "student.h"
void show_students(SLL *ptr)
{
    SLL *temp = ptr;
    if (temp ==0)
    {
        printf("No records found\n");
        return;
    }
    printf("\nRoll No\tName\tPercentage\n");
    while (temp != NULL)
    {
        printf("%d\t%s\t%.2f\n",
               temp->rollno,
               temp->name,
               temp->percentage);
        temp = temp->next;
    }
}
