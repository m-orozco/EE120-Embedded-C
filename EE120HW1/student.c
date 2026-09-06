#include <stdio.h>

/* define a struct for related student data */
typedef struct student {
    char name[50];
    char major[20];
    double gpa;
    int age;
} STUDENT;

int main(void)
{
STUDENT bob   = {"Bob Smith", "Math", 3.77};
STUDENT sally = {"Sally", "CSEE", 4.0};
STUDENT Martin = {"Martin", "EE", 3.75, 34};
STUDENT *pStudent;   /* pointer to struct student */

/* make pStudent point to bob */
pStudent = &bob;
printf("Bob's name: %s\n", pStudent->name);
printf("Bob's gpa:  %f\n", pStudent->gpa);

/* make pStudent point to sally */
pStudent = &sally;
printf("Sally's name: %s\n", pStudent->name);
printf("Sally's gpa:  %f\n", pStudent->gpa);

pStudent = &Martin;
printf("Martin's name: %s\n", pStudent->name);
printf("Martin's gpa:  %f\n", pStudent->gpa);
printf("Martin's age:  %d\n", pStudent->age);

    return 0;
}