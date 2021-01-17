#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // fabs,sqrt

#define MAXSTUDENTS 100

int main()
{
    int score[MAXSTUDENTS];
    int N = 0; // Number of students
    float avg, variance, std_dev, abs_dev;
    float total = 0.0, sqr_total = 0.0, abs_total = 0.0;
    int i = 0;

    printf("How many students are there (max 100) ? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Enter grade of student # %d : ", i + 1);
        scanf("%d", &score[i]);

        total = total + score[i];
    }
    avg = total / N;

    for (i = 0; i < N; i++) {
        sqr_total = sqr_total + (score[i] - avg) * (score[i] - avg);
        abs_total = abs_total + fabs(score[i] - avg);
    }

    variance = sqr_total / (N - 1);
    std_dev = sqrt(variance);
    abs_dev = abs_total / N;

    printf("\n\n");
    printf("Average            =  %f\n", avg);
    printf("Variance           =  %f\n", variance);
    printf("Standard deviation =  %f\n", std_dev);
    printf("Absolute deviation =  %f\n", abs_dev);

    system("pause");
    return 0;
}
