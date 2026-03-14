/* StudentScoresModular.c
   Practical 6, Part 2 (a)
   Modular array operations with functions
  Aayush K.C. */
#include <stdio.h>
#define NUM_STUDENTS 5

// Function declarations
void readScores(int scores[], int size);
int calculateSum(int scores[], int size);
double calculateAverage(int scores[], int size);
int findMaximum(int scores[], int size);
int findMinimum(int scores[], int size);
void displayScores(int scores[], int size);
void displayStatistics(int scores[], int size);

int main() {
    int scores[NUM_STUDENTS];

    readScores(scores, NUM_STUDENTS);
    displayScores(scores, NUM_STUDENTS);
    displayStatistics(scores, NUM_STUDENTS);

    return 0;
}

// Read scores from user
void readScores(int scores[], int size) {
    printf("Enter %d student scores:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
}

// Calculate sum of scores
int calculateSum(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

// Calculate average score
double calculateAverage(int scores[], int size) {
    int sum = calculateSum(scores, size);
    return (double)sum / size;
}

// Find maximum score
int findMaximum(int scores[], int size) {
    int max = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > max) max = scores[i];
    }
    return max;
}

// Find minimum score
int findMinimum(int scores[], int size) {
    int min = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < min) min = scores[i];
    }
    return min;
}

// Display all scores
void displayScores(int scores[], int size) {
    printf("\nIndividual Scores:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: %d\n", i + 1, scores[i]);
    }
}

// Display statistics
void displayStatistics(int scores[], int size) {
    printf("\nStatistics:\n");
    printf("Sum: %d\n", calculateSum(scores, size));
    printf("Average: %.2lf\n", calculateAverage(scores, size));
    printf("Highest score: %d\n", findMaximum(scores, size));
    printf("Lowest score: %d\n", findMinimum(scores, size));
}