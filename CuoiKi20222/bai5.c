#include <stdio.h>

struct Subject {
    float midtermGrade;
    float finalGrade;
    float creditWeight;
    int tin;  
};

char calculateGrade(float totalGrade) {
    if (totalGrade >= 8.5) {
        return 'A';
    } else if (totalGrade >= 7.5) {
        return 'B';
    } else if (totalGrade >= 6.5) {
        return 'C';
    } else {
        return 'D';
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    
    struct Subject subjects[n];
    float totalCredits = 0.0;
    float totalWeightedGrades = 0.0;
    int lowerGradesCount = 0; 
    

    for (i = 0; i < n; i++) {
        scanf("%f", &subjects[i].midtermGrade);
        scanf("%f", &subjects[i].finalGrade);
        scanf("%f", &subjects[i].creditWeight);
        scanf("%d", &subjects[i].tin);
        totalWeightedGrades += (subjects[i].midtermGrade * subjects[i].creditWeight + subjects[i].finalGrade *(1 - subjects[i].creditWeight)) * subjects[i].tin;

        totalCredits += subjects[i].tin;

        if ((subjects[i].midtermGrade * subjects[i].creditWeight +
             subjects[i].finalGrade * ( 1 - subjects[i].creditWeight)) < 6.5) {
            lowerGradesCount++;
        }
    }

    float averageGrade = totalWeightedGrades / totalCredits;
        
    if (lowerGradesCount >= n / 3 && (averageGrade >= 8.5 || averageGrade >= 7.5)) {
        averageGrade -=1.0; }

    if (averageGrade >= 8.5) {
        printf("A\n");
    } else if (averageGrade >= 7.5) {
        printf("B\n");
    } else if (averageGrade >= 6.5) {
        printf("C\n");
    } else {
        printf("D\n");
    }

    return 0;
}