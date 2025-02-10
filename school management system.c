#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdint.h>

// Step1: Defining the 'Student' Struct
 typedef struct student 
 {
    char name[20];
    int id;
    unsigned int grade;
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
    printf("Input student grade:");
    scanf("%u", newStudent->grade);
    newStudent = (Student*)malloc(sizeof(Student));
    newStudent->id = studentId;
    strcpy(newStudent->name, studentName);
    return newStudent;
}

// Step5: Creating a Course
Course* CreateCourse(void)
{   
    Course *newCourse = (Course*)malloc(sizeof(Course));
    printf("Enter Course Name:");
    scanf("%20s", newCourse->name);
    // printf("Enter average grade:");
    // scanf("%f", newCourse->averageGrade);
    printf("Enter total number of students of attending course:");
    scanf("%d", newCourse->totalStudents);
    printf("Enter students that attend courses:");
    newCourse->studentArray = (Student*)malloc(sizeof(Student)*newCourse->totalStudents);
    for(int i=0; i<newCourse->totalStudents;i++)
    {   
        printf("Enter details for student #%d\n",i + 1);
        Student* newStudent = CreateStudent();
        newCourse->studentArray[i] = *newStudent; 
        newCourse->averageGrade += newCourse->studentArray[i].grade;
        free(newStudent); // free the temporary student memory allocated by "create student"
    }
    newCourse->averageGrade /= newCourse->totalStudents;
    return newCourse;
}

// Step6: Creating a School
School* CreateSchool(void)
{   
    School* newSchool = (School*)malloc(sizeof(School));
    printf("Enter School Name:");
    scanf("%20s", newSchool->name);
    // printf("Enter average grade:");
    // scanf("%f", newCourse->averageGrade);
    printf("Enter total number of courses in school:");
    scanf("%d", newSchool->totalCourses);
    printf("Enter courses that is attending in school:");
    newSchool->courseArray = (Course*)malloc(sizeof(Course)*newSchool->totalCourses);
    for(int i=0; i<newSchool->totalCourses;i++)
    {
        printf("Enter details for course #%d\n",i + 1);
        Course* newCourse = CreateCourse();
        newSchool->courseArray[i] = *newCourse;
        free(newCourse); // free the temporary student memory allocated by "create student"
    }
    return newSchool;
}

// Step 7: Print Student Details

void PrintStudentDetails(Student* student)
{
    printf("Student name:%s\n", student->name);
    printf("Student ID:%u\n",student->id);
    printf("Student grade:%u\n",student->grade);
}

// Step 8: Print Course Details

void PrintCourseDetails(Course* course)
{
    printf("Course name:%s\n", course->name);
    printf("Course average grade:%lf\n",course->averageGrade);
    printf("Total students that attending course:%d\n", course->totalStudents);
    for(int i=0;i<course->totalStudents;i++)
    {
        printf("Detalis for student %d:\n");
        PrintStudentDetails(&(course->studentArray[i]));
    } 
}

// Step 9: Print All Student's Courses
void PrintAllStudentsCourses(Student* student, School* school)
{
    printf("Courses that student %s with student id %u attends:\n", student->name, student->id);
    for(int i=0; i<school->totalCourses; i++)
    {
        for(int j=0; j<school->courseArray[i].totalStudents; j++)
        {
            if(strcmp(student->name, school->courseArray[i].studentArray[j].name) == 0)
            {
                printf("%s\n", school->courseArray[i].name);
                break; //if student found in this course, no need to check other students 
            }
        }
    }
}

// Step 10: Print Students Who Failed Course

void printStudentsWhoFailed(Course* course, double cutoffGrade)
{
    printf("Students who failed in %s:\n", course->name);
    for(int i=0; i<course->totalStudents;i++)
    {
        if(course->studentArray[i].grade < cutoffGrade)
        {
            PrintStudentDetails(&(course->studentArray[i]));
        }
    }
}

// Step 11: Print Students Who Passed Course

void printStudentsWhoPased(Course* course, double cutoffGrade)
{
    printf("Students who pased in %s:\n", course->name);
    for(int i=0; i<course->totalStudents;i++)
    {
        if(course->studentArray[i].grade >= cutoffGrade)
        {
            PrintStudentDetails(&(course->studentArray[i]));
        }
    }
}

// Step 12: Print All Courses with Pass Average Grade

void printCoursessWitPassAverageGrade(School* school, double cutoffGrade)
{
    printf("Courses with average grade above pass value:\n");
    for(int i=0; i<school->totalCourses; i++)
    {
        if(school->courseArray[i].averageGrade >= cutoffGrade)
        {
            PrintCourseDetails(&(school->courseArray[i]));
        }
    }
}

// Step 13: Print All Courses with Failed Average Grade

void printCoursessWitFailedAverageGrade(School* school, double cutoffGrade)
{
    printf("Courses with average grade below pass value:\n");
    for(int i=0; i<school->totalCourses; i++)
    {
        if(school->courseArray[i].averageGrade < cutoffGrade)
        {
            PrintCourseDetails(&(school->courseArray[i]));
        }
    }
}

// Step 14: Printing the Average Grade Between All Courses

void printAverageGradeBetweenAllCourses(School* school)
{
    double avgValue = 0;
    for(int i=0; i<school->totalCourses; i++)
    {
       avgValue += school->courseArray[i].averageGrade;
    }
    avgValue /= school->totalCourses;
    printf("Average Grade Between all courses in school %s is: %.2f\n",school->name, avgValue);
}

// Step 15: Print Course with Highest Average Grade

void printCoursessWitHighestAverageGrade(School* school)
{
    double maxAverageGrade = 0;
    Course* highestAvgCourse = NULL;
    for(int i=0; i<school->totalCourses; i++)
    {
        if(school->courseArray[i].averageGrade >= maxAverageGrade)
        {
            maxAverageGrade = school->courseArray[i].averageGrade;
            highestAvgCourse = &(school->courseArray[i]);
        }
    }
    printf("Course with Highest Average Grade is:\n");
    PrintCourseDetails(highestAvgCourse);
}


 int main()
 {

 }
