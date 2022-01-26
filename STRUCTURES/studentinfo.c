// Write a program using structures to read and display the information of all the students in the class
#include <stdio.h>
void main() {
    struct STUDENT {
        int roll_no;
        char name[30];
        int fees;
        char DOB[10];
    };
    int n;
    printf("\n Enter the number of students: ");
    scanf("%d", &n);
    struct STUDENT stud[n];
    // Array of structure declaration.
    for (int i = 0; i < n; i++) {
        printf("\n Enter %d student details:", i + 1);
        printf("\n Enter the roll number: ");
        scanf("%d", &stud[i].roll_no);
        printf("\n Enter Name: ");
        scanf("%s", stud[i].name);
        printf("\n Enter the fees: ");
        scanf("%d", &stud[i].fees);
        printf("\n Enter the date of birth[DD-MM-YYYY]: ");
        scanf("%s", stud[i].DOB);
    }
    printf("\n ********** STORED STUDENT DETAILS **********");
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("\n Details of %d student:", i + 1);
        printf("\n\t   Roll Number = %d", stud[i].roll_no);
        printf("\n\t   Name = %s", stud[i].name);
        printf("\n\t   FEES = %d", stud[i].fees);
        printf("\n\t   Date of birth = %s", stud[i].DOB);
    }
}

//  input

//  Enter the number of students: 2

//  Enter 1 student details:
//  Enter the roll number: 1

//  Enter Name: ajay

//  Enter the fees: 2000

//  Enter the date of birth[DD-MM-YYYY]: 03-05-2002

//  Enter 2 student details:
//  Enter the roll number: 2

//  Enter Name: vijay

//  Enter the fees: 5000

//  Enter the date of birth[DD-MM-YYYY]: 05-03-2004
//  output
//  ********** STORED STUDENT DETAILS **********

//  Details of 1 student:
//            Roll Number = 1
//            Name = ajay
//            FEES = 2000
//            Date of birth = 03-05-2002

//  Details of 2 student:
//            Roll Number = 2
//            Name = vijay
//            FEES = 5000
//            Date of birth = 05-03-2004