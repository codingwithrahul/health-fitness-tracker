#include <stdio.h>

void calculateBMI() {
    float weight, height, bmi;

    printf("\nEnter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Status: Underweight\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Status: Normal\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("Status: Overweight\n");
    else
        printf("Status: Obese\n");
}

void calorieTracker() {
    int calories;

    printf("\nEnter calories consumed today: ");
    scanf("%d", &calories);

    if (calories < 1800)
        printf("You need more nutrition.\n");
    else if (calories <= 2500)
        printf("Good calorie intake 👍\n");
    else
        printf("Too many calories! Try exercising.\n");
}

void waterTracker() {
    float water;

    printf("\nEnter water intake (in liters): ");
    scanf("%f", &water);

    if (water < 2)
        printf("Drink more water 💧\n");
    else
        printf("Good hydration level 👍\n");
}

void fitnessStatus() {
    int steps;

    printf("\nEnter today's step count: ");
    scanf("%d", &steps);

    if (steps < 5000)
        printf("Low activity. Try walking more.\n");
    else if (steps <= 10000)
        printf("Good activity level!\n");
    else
        printf("Excellent! You're very active 🔥\n");
}

int main() {
    int choice;

    do {
        printf("\n==============================");
        printf("\n  HEALTH & FITNESS TRACKER");
        printf("\n==============================");
        printf("\n1. Calculate BMI");
        printf("\n2. Calorie Tracker");
        printf("\n3. Water Intake Tracker");
        printf("\n4. Fitness Status");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculateBMI();
                break;
            case 2:
                calorieTracker();
                break;
            case 3:
                waterTracker();
                break;
            case 4:
                fitnessStatus();
                break;
            case 5:
                printf("\nThank you for using Health Tracker!\n");
                break;
            default:
                printf("\nInvalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
