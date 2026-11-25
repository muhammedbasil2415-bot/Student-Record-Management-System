
#include "student.h"
void save_records(SLL *ptr)
{
    SLL *temp;
    FILE *fp = fopen("student.dat", "w");
    temp = ptr;
    while (temp)
    {
        fprintf(fp, "%d  %f  %s\n",
                temp->rollno,
                temp->percentage,
                temp->name);

        temp = temp->next;
    }
    fclose(fp);
    printf("Records saved successfully!\n");
}
void load_records(SLL **ptr)
{
    SLL *new, *last;
    FILE *fp;
    fp = fopen("student.dat", "r");
    if (fp == NULL)
        return;
    while (1)
    {
        new = malloc(sizeof(SLL));
        if (fscanf(fp, "%d  %f  %s",
                   &new->rollno,
                   &new->percentage,
                   new->name) != 3)
        {
            free(new);
            break;
        }
        new->next = NULL;

        if (*ptr == NULL)
            *ptr = new;
        else
        {
            last = *ptr;

            while (last->next)
                last = last->next;

            last->next = new;
        }
    }

    fclose(fp);
}

