// make an array of 7 for mark of students and mark 0 to 100 and also display the students roll number whose mark is below 45
#include <stdio.h>
int main()
{
    int marks[7];
    for (int i = 1;i <= 7;i++ ){
        printf("enter the marks  %d :",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0;i <= 7;i++){
        if (marks[i] < 45){
            printf("students under 45 : %d\n","roll no. ",i);
        }
    }
    return 0 ;
}