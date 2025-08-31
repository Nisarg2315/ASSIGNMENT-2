#include <stdio.h>

int main() {
    int physics, chemistry, maths;
    int total_marks;
    float average_marks;

    printf("Enter marks for physics: ");
    scanf("%d", &physics);
    printf("Enter marks for chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks for maths: ");
    scanf("%d", &maths);

    if (physics < 35 || chemistry < 35 || maths< 35) {
        printf("Result: Fail (Secured less than 35 marks in one or more subjects)\n");
    } else {

        total_marks = physics + chemistry + maths;
        average_marks = (float)total_marks / 3.0;

        printf("Total Marks: %d\n", total_marks);
        printf("Average Marks: %.2f\n", average_marks);


        if (average_marks >= 70) {
            printf("Grade: Distinction\n");
        } else if (average_marks >= 60) {
            printf("Grade: First Class\n");
        } else if (average_marks >= 50) {
            printf("Grade: Second Class\n");
        } else if (average_marks >= 35) {
            printf("Grade: Third Class\n");
        } else {
            printf("Grade: Fail\n");
        }
    }

    return 0;
}
