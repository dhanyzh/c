// make an array of 7 for mark of students and mark 0 to 100 and also display the students roll number whose mark is below 45
#include <stdio.h>
int main()
{
    int marks[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nStudents scoring below 45:\n");
    for (int i = 0; i < 7; i++)
    {
        if (marks[i] < 45)
        {
            printf("Roll no. %d\n", i + 1);
        }
    }

    return 0;
}