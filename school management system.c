#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdint.h>

// Step1: Defining the 'Student' Struct
 typedef struct student 
 {
    char name[20];
    int id;
 }Student;
// Step2: Defining the 'Course' Struct
typedef struct course
{
    char name[20];
    double averageGrade;
    unsigned int totalStudents;
    Student* studentArray;
}Course;
// Step3: Defining the 'School' Struct
typedef struct school
{
    char name[20];
    unsigned int totalCourses;
    Course* courseArray;
}School;

// Step4: Creating Student
Student* CreateStudent(void)
{   
    char studentName[20];
    int studentId;
    Student* newStudent;
    printf("Input student Name:");
    scanf("%20s", studentName);
    printf("Input student id:");
    scanf("%u", &studentId);
    newStudent = (Student*)malloc(sizeof(Student));
    newStudent->id = studentId;
    strcpy(newStudent->name, studentName);
    return newStudent;
}

// Step5: Creating a Course
Student* CreateCourse(void)
{   
    Course *newCourse = (Course*)malloc(sizeof(Course));
    printf("Enter Course Name:");
    scanf("%20s", newCourse->name);
    printf("Enter average grade:");
    scanf("%f", newCourse->averageGrade);
    printf("Enter total number of students of attending course:");
    scanf("%d", newCourse->totalStudents);
    printf("Enter students that attend courses:");
    newCourse->studentArray = (Student*)malloc(sizeof(Student)*newCourse->totalStudents);
    for(int i=0; i<newCourse->totalStudents;i++)
    {
        printf("Enter details for student #%D\n",i + 1);
        Student* newStudent = CreateStudent();
        newCourse->studentArray[i] = *newStudent; 
        free(newStudent); // free the temporary student memory allocated by "create student"
    }
    
    return newCourse;
}


 int main()
 {

 }
