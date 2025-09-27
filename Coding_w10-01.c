#include<stdio.h>

#include <stdio.h>

int main() {
    int num_students;
    int x;
    float score, sum = 0, average;

    printf("Enter number of students: "); 
    scanf("%d", &num_students);
    
    printf("Enter %d student scores (one per line):\n", num_students);
    for (x = 0; x < num_students; x++) {

        printf("Score %d: ", x + 1);
        scanf("%f", &score);
        sum = sum + score;

    }
    
    average = sum / num_students;

    printf("\nNumber of students = %d\n", num_students);
    printf("Average score = %.2f\n", average);

    return 0;
}
//