#include "student.h"
void sort_students(SLL **ptr)
{
    int i, j;
    SLL *p1, *p2;
    SLL t;
    char ch;
    if (*ptr == 0)
    {
        printf("No records found!\n");
        return;
    }
    printf("\nN/n : Sort by name\n");
    printf("P/p : Sort by percentage\n");
    printf("Enter choice: ");
    scanf(" %c", &ch);
    if (ch != 'N' && ch != 'n' && ch != 'P' && ch != 'p')
    {
        printf("Invalid choice!\n");
        return;
    }
    for (p1=*ptr;p1->next!=0;p1=p1->next)
    {
        for (p2=p1->next; p2!=0;p2=p2->next)
        {
            if ((ch == 'N' || ch == 'n') && strcmp(p1->name, p2->name) > 0)
            {
                t.rollno = p1->rollno;
                strcpy(t.name, p1->name);
                t.percentage = p1->percentage;

                p1->rollno = p2->rollno;
                strcpy(p1->name, p2->name);
                p1->percentage = p2->percentage;

                p2->rollno = t.rollno;
                strcpy(p2->name, t.name);
                p2->percentage = t.percentage;
            }
            else if ((ch == 'P' || ch == 'p') && p1->percentage < p2->percentage)
            {
                t.rollno = p1->rollno;
                strcpy(t.name, p1->name);
                t.percentage = p1->percentage;

                p1->rollno = p2->rollno;
                strcpy(p1->name, p2->name);
                p1->percentage = p2->percentage;

                p2->rollno = t.rollno;
                strcpy(p2->name, t.name);
                p2->percentage = t.percentage;
            }
        }
    }

    printf("Records sorted successfully!\n");
}
void reverse_list(SLL **ptr)
{
    SLL *prev = 0;
    SLL *p1 = *ptr;
    SLL *p2;

    if (*ptr ==0)
    {
        printf("No records found!\n");
        return;
    }

    while (p1)
    {
        p2=p1->next;
        p1->next = prev;
        prev =p1;
        p1=p2;
    }

    *ptr = prev;

    printf("List reversed successfully!\n");
}
