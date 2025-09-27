#include<stdio.h>

int main() {
    int i, j;
    float scores[3][3];  
    float sum[3] = {0}; 
    char *subjects[3] = {"Math", "Physics", "Chemistry"};

    for (i = 0; i < 3; i++) 
    {
        printf("Enter scores for Student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
            sum[j]  = sum[j] + scores[i][j];  
        }
    }

printf("\nScore Table:\n");

printf("%-8s %10s %10s %10s\n", "Student", "Math", "Physics", "Chemistry");

for (i = 0; i < 3; i++)
    {
    printf("%-8d", i + 1); 
    for (j = 0; j < 3; j++) {
        printf("%10.2f", scores[i][j]);  
    }
    printf("\n");
    }

    printf("\nAverage per subject:\n");
    for (j = 0; j < 3; j++) 
    {
        printf("%s: %.2f\n", subjects[j], sum[j] / 3.0);
    }

    return 0;
}