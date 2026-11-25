
#include "student.h"
int main()
{
    SLL *head = 0;
    char ch;
   load_records(&head);
    while (1)
    {
        printf("\n******** STUDENT RECORD MENU ********\n");
        printf("a/A : Add new record\n");
        printf("d/D : Delete a record\n");
        printf("s/S : Show the list\n");
        printf("m/M : Modify a record\n");
        printf("v/V : Save records\n");
        printf("e/E : Exit\n");
        printf("t/T : Sort the list\n");
        printf("l/L : Delete all the records\n");
        printf("r/R : Reverse the list\n");
        printf("\nEnter your choice: ");
        scanf(" %c", &ch);
switch(ch)
{
    case 'a':
    case 'A':
        add_student(&head);
        break;
    case 's':
    case 'S':
        show_students(head);
        break;
    case 'v':
    case 'V':
        save_records(head);
            break;
    case 'r':
    case 'R':
        reverse_list(&head);
	break;
    case 'l':
    case 'L':delete_all(&head);
             break;
    case 'd':
    case 'D':
        delete_student(&head);
        break;
    case 't':
    case 'T':
        sort_students(&head);
        break;
    case 'm':
    case 'M':
        modify_student(head);
        break;
    case 'e':
    case 'E':
       exit_program(&head);
       break;
    default:
        printf("Invalid choice!\n");
}
}
}
void exit_program(SLL **ptr)
{
    char ch;
    printf("\nS/s : save and Exit\n");
    printf("E/e : exit Without Saving\n");
    printf("Enter your choice: ");
    scanf(" %c", &ch);
    if (ch=='S'||ch=='s')
    {
        save_records(*ptr);
    }
    else if (ch=='E'||ch=='e')
    {
        printf("exiting without saving!\n");
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }
    free_list(ptr);
    exit(0);
}
void free_list(SLL **ptr)
{
    SLL *t;

    while (*ptr)
    {
        t= *ptr;
        *ptr =t->next;
        free(t);
    }
}
