#include <stdio.h>

float calculate_percentage(float marks, float total) {
    return (marks / total) * 100;
}

int main() {
    float nts_marks, fsc_marks;
    const float total_nts_marks = 100.0; 
    const float total_fsc_marks = 1100.0; 

   
    printf("Enter your NTS marks (out of %.0f): ", total_nts_marks);
    scanf("%f", &nts_marks);

    printf("Enter your F.Sc marks (out of %.0f): ", total_fsc_marks);
    scanf("%f", &fsc_marks);

    float nts_percentage = calculate_percentage(nts_marks, total_nts_marks);
    float fsc_percentage = calculate_percentage(fsc_marks, total_fsc_marks);

    printf("Your NTS Percentage: %.2f%%\n", nts_percentage);
    printf("Your F.Sc Percentage: %.2f%%\n", fsc_percentage);

    if (fsc_percentage > 70) {
        if (nts_percentage >= 70) {
            printf("Congratulations! You are eligible for IT at Oxford University.\n");
        } else if (nts_percentage >= 60) {
            printf("Congratulations! You are eligible for Electronics at Oxford University.\n");
        } else if (nts_percentage >= 50) {
            printf("Congratulations! You are eligible for Telecommunication at Oxford University.\n");
        } else {
            printf("Unfortunately, you do not meet the criteria for any department at Oxford University.\n");
        }
    }

    if (fsc_percentage >= 60 && fsc_percentage <= 70 && nts_percentage >= 50) {
        printf("Congratulations! You are eligible for IT at MIT.\n");
    } else if (fsc_percentage >= 50 && fsc_percentage <= 59 && nts_percentage >= 50) {
        printf("Congratulations! You are eligible for Chemical Engineering at MIT.\n");
    } else if (fsc_percentage > 40 && fsc_percentage < 50 && nts_percentage >= 50) {
        printf("Congratulations! You are eligible for Computer Science at MIT.\n");
    } else {
        if (!(fsc_percentage > 70)) { 
            printf("Unfortunately, you do not meet the criteria for any department at MIT.\n");
        }
    }

    return 0;
}

