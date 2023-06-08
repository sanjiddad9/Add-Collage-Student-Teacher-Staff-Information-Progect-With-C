#include <stdio.h>
#include <string.h>

// TODO: Student Structure....
struct Student {
    char Name[50];
    char Program[5];
    char Semester[10];
    char ID[10];
    char Year[5];
};

// TODO: Teacher Structure....
struct Teacher {
    char Name[50];
    char Program[5];
    char Subject[50];
    char ID[10];
    char Year[5];
};

// TODO: Staff Structure....
struct Staff {
    char Name[50];
    char Position[50];
    char ID[10];
    char Year[5];
};

// TODO: Add Student Structure Function....
void ADD_STUDENT(struct Student *STUDENT);

// TODO: Add Teacher Structure Function....
void ADD_TEACHER(struct Teacher *TEACHER);

// TODO: Add Staff Structure Function....
void ADD_STAFF(struct Staff *STAFF);

int main() {
    printf("!!! WELCOME !!! \n");

    // TODO: Create new Structure Reference....
    struct Student S1;
    struct Teacher T1;
    struct Staff ST1;

    // TODO: Input Value Form User....
    printf("Enter a Number (1 - Student, 2 - Teacher, 3 - Staff): ");
    char AAA;
    gets(&AAA);

    // TODO: Check, If --> TRUE Then GO...ON Otherwise Exit The Program
    if (AAA == '1' || AAA == '2' || AAA == '3') {
        while (AAA == '1' || AAA == '2' || AAA == '3') {
            if (AAA == '1') {
                ADD_STUDENT(&S1);
                printf("Add Successful... \n");
            } else if (AAA == '2') {
                ADD_TEACHER(&T1);
                printf("Add Successful... \n");
            } else if (AAA == '3') {
                ADD_STAFF(&ST1);
                printf("Add Successful... \n");
            }
            printf("Want More..... Then Enter a Number (1 - Student, 2 - Teacher, 3 - Staff) OR Enter 0: ");
            gets(&AAA);
        }
    } else {
        printf("Invalid Input.");
    }

    return 0;
}

// TODO: Initialize Add Student Structure Function....
void ADD_STUDENT(struct Student *STUDENT) {
    // TODO: Input Student Name....
    printf("Student Name: ");
    char NAME[50];
    strcpy(STUDENT->Name, gets(NAME));

    // TODO: Input Student Program Name....
    printf("Program: ");
    char PROGRAM[5];
    strcpy(STUDENT->Program, gets(PROGRAM));

    // TODO: Input Student Semester Name....
    printf("Semester: ");
    char SEMESTER[10];
    strcpy(STUDENT->Semester, gets(SEMESTER));

    // TODO: Input Student ID....
    printf("Id: ");
    char ID[10];
    strcpy(STUDENT->ID, gets(ID));

    // TODO: Input Student Admission Year....
    printf("Admission Year: ");
    char YEAR[5];
    strcpy(STUDENT->Year, gets(YEAR));


    /* TODO: Save Value to File....                                     FILE Name: StudentData.txt */


    // TODO: Create FILE Pointer....
    FILE *STUDENTFILEPointer;

    // TODO: Open FILE....
    STUDENTFILEPointer = fopen("G:\\CLionProject\\All Project\\Add.Value.System\\StudentData.txt", "a");

    // TODO: Save Value to the FILE....
    fprintf(STUDENTFILEPointer, "%s \t", "*");
    fprintf(STUDENTFILEPointer, "%s \t", STUDENT->Name);
    fprintf(STUDENTFILEPointer, "%s \t", STUDENT->ID);
    fprintf(STUDENTFILEPointer, "%s \t", STUDENT->Program);
    fprintf(STUDENTFILEPointer, "%s \t", STUDENT->Semester);
    fprintf(STUDENTFILEPointer, "%s \t", STUDENT->Year);
    fprintf(STUDENTFILEPointer, "\n");

    // TODO: Close FILE....
    fclose(STUDENTFILEPointer);
}

// TODO: Initialize Add Teacher Structure Function....
void ADD_TEACHER(struct Teacher *TEACHER) {
    // TODO: Input Teacher Name....
    printf("Teacher Name: ");
    char NAME[50];
    strcpy(TEACHER->Name, gets(NAME));

    // TODO: Input Teacher Program Name....
    printf("Program: ");
    char PROGRAM[50];
    strcpy(TEACHER->Program, gets(PROGRAM));

    // TODO: Input Teacher Subject Name....
    printf("Subject: ");
    char SUBJECT[50];
    strcpy(TEACHER->Subject, gets(SUBJECT));

    // TODO: Input Teacher ID....
    printf("Id: ");
    char ID[10];
    strcpy(TEACHER->ID, gets(ID));

    // TODO: Input Teacher Join Year....
    printf("Join Year: ");
    char YEAR[5];
    strcpy(TEACHER->Year, gets(YEAR));


    /* TODO: Save Value to File....                                     FILE Name: TeacherData.txt */


    // TODO: Create FILE Pointer....
    FILE *TEACHERFILEPointer;

    // TODO: Open FILE....
    TEACHERFILEPointer = fopen("G:\\CLionProject\\All Project\\Add.Value.System\\TeacherData.txt", "a");

    // TODO: Save Value to the FILE....
    fprintf(TEACHERFILEPointer, "%s \t", "*");
    fprintf(TEACHERFILEPointer, "%s \t", TEACHER->Name);
    fprintf(TEACHERFILEPointer, "%s \t", TEACHER->ID);
    fprintf(TEACHERFILEPointer, "%s \t", TEACHER->Program);
    fprintf(TEACHERFILEPointer, "%s \t", TEACHER->Subject);
    fprintf(TEACHERFILEPointer, "%s \t", TEACHER->Year);
    fprintf(TEACHERFILEPointer, "\n");

    // TODO: Close FILE....
    fclose(TEACHERFILEPointer);
}

// TODO: Initialize Add Staff Structure Function....
void ADD_STAFF(struct Staff *STAFF) {
    // TODO: Input Staff Name....
    printf("Staff Name: ");
    char NAME[50];
    strcpy(STAFF->Name, gets(NAME));

    // Todo: Input Staff Position Name....
    printf("Position: ");
    char POSITION[50];
    strcpy(STAFF->Position, gets(POSITION));

    // TODO: Input Staff ID....
    printf("Id: ");
    char ID[10];
    strcpy(STAFF->ID, gets(ID));

    // TODO: Input Staff Join Year....
    printf("Join Year: ");
    char YEAR[5];
    strcpy(STAFF->Year, gets(YEAR));


    /* TODO: Save Value to File....                                     FILE Name: StaffData.txt */


    // TODO: Create FILE Pointer....
    FILE *STAFFFILEPointer;

    // TODO: Open FILE....
    STAFFFILEPointer = fopen("G:\\CLionProject\\All Project\\Add.Value.System\\StaffData.txt", "a");

    // TODO: Save Value to the FILE....
    fprintf(STAFFFILEPointer, "%s \t", "*");
    fprintf(STAFFFILEPointer, "%s \t", STAFF->Name);
    fprintf(STAFFFILEPointer, "%s \t", STAFF->ID);
    fprintf(STAFFFILEPointer, "%s \t", STAFF->Position);
    fprintf(STAFFFILEPointer, "%s \t", STAFF->Year);
    fprintf(STAFFFILEPointer, "\n");

    // TODO: Close FILE....
    fclose(STAFFFILEPointer);
}