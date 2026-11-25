
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    int rollno;
    char name[20];
    float percentage;
    struct student *next;
} SLL;
void add_student(SLL **ptr);
void delete_student(SLL **ptr);
void show_students(SLL *ptr);
void modify_student(SLL *ptr);
void save_records(SLL *ptr);
void load_records(SLL **ptr);
void sort_students(SLL **ptr);
void reverse_list(SLL **ptr);
void delete_all(SLL **ptr);
void free_list(SLL **ptr);
void exit_program(SLL **ptr);


