#include "student.h"
void delete_student(SLL **ptr)
{
    SLL *del, *prev = NULL;
    char ch, name[20];
    int roll;
    printf("Delete by (R)oll number or (N)ame: ");
    scanf(" %c", &ch);
    if (ch == 'R' || ch == 'r')
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
        del = *ptr;
        while (del)
        {
            if (del->rollno == roll)
            {
                if (*ptr == del)
                    *ptr = del->next;
                else
                    prev->next = del->next;
                free(del);
                printf("Record deleted successfully\n");
                return;
            }
            prev = del;
            del = del->next;
        }
    }
    else if (ch == 'N' || ch == 'n')
    {
        printf("Enter student name: ");
        scanf(" %49[^\n]", name);
        del = *ptr;
        prev = NULL;
        while (del)
        {
            if (strcmp(del->name, name) == 0)
            {
                if (*ptr == del)
                    *ptr = del->next;
                else
                    prev->next = del->next;
                free(del);
                printf("Record deleted successfully\n");
                return;
            }
            prev = del;
            del = del->next;
        }
    }
    else
    {
        printf("Invalid choice!\n");
        return;
    }
    printf("Student not found!\n");
}
void delete_all(SLL**ptr)
{
	if(*ptr==0){
	printf("no record found\n");
	return;
	}
	SLL*del=*ptr;
	while(del){
	*ptr=del->next;
	free(del);
	del=*ptr;
	}
	printf("all records deleted succesfully\n");
	}
