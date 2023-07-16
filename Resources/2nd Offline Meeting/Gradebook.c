/*
	Create a program that allows a teacher to input the grades of their students and 
	calculates their average grade. 
	Use conditions to check if the grade is valid (between 0 and 100) and 
	use loops to allow the teacher to input grades for multiple students.
*/



#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    float total_grade = 0.0;
    for (int i = 1; i <= num_students; i++) {
        float grade;
        printf("Enter the grade for student %d: ", i);
        scanf("%f", &grade);

        if (grade < 0 || grade > 100) {
            printf("Invalid grade. Please enter a grade between 0 and 100.\n");
            i--;
        } else {
            total_grade += grade;
        }
    }

    float avg_grade = total_grade / num_students;
    printf("The average grade for the class is %.2f\n", avg_grade);

    return 0;
}