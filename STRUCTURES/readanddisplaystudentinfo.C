/*Write a program using structures to read and display the information about a student. Where as structure declaration in local scope.*/
#include<stdio.h> 
int main()
{
    struct STUDENT
    {
        int roll_no; 
        char name[30]; 
        float fees;
        char DOB[11];
    };
    struct STUDENT stu1;
    printf(" \n Enter the student roll number: "); 
    scanf("%d",&stu1.roll_no);
    printf("\n Enter student name:  "); 
    scanf("%s",stu1.name);
    printf("\n Enter the fees: "); 
    scanf("%f",&stu1.fees);
    printf("\n Enter the Date of Birth[DD:MM:YYYY]: "); 
    scanf("%s",stu1.DOB);
    printf("\n********** STUDENT DETAILS**********");
    printf("\n Student Roll number = %d",stu1.roll_no);
    printf("\n Student Name = %s ",stu1.name); 
    printf("\n FEES =   %f ", stu1.fees);
    printf("\n Student date of birth= %s ", stu1.DOB);
    return 0;
}
