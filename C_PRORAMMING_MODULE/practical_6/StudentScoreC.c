/* StudentScoresC.c
   Practical 6, Part 1 (c)
   Finding maximum and minimum scores
   Aayush K.C. */
#include <stdio.h>
#define NUM_STUDENTS 5

int main() {
    int scores[NUM_STUDENTS];
    int sum = 0;
    double average;

    // Read in scores
    printf("Enter %d student scores:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Calculate sum
    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i];
    }

    // Calculate average
    average = (double)sum / NUM_STUDENTS;

    // Find maximum score
    // We start at i=1 because scores[0] is already set as the initial max
    int maxScore = scores[0];
    int maxIndex = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxIndex = i;
        }
    }

    // Find minimum score
    // Same reason: scores[0] is the initial min reference
    int minScore = scores[0];
    int minIndex = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
            minIndex = i;
        }
    }

    // Display individual scores
    printf("\nIndividual Scores:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %d\n", i + 1, scores[i]);
    }

    // Display statistics
    printf("\nStatistics:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
    printf("Highest score: %d (Student %d)\n", maxScore, maxIndex + 1);
    printf("Lowest score: %d (Student %d)\n", minScore, minIndex + 1);

    return 0;
}