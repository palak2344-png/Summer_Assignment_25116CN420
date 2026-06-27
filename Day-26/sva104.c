//Write a program to create quiz application.
#include <stdio.h>

int main() {
    char ans;
    int score = 0;

    printf("WELCOME TO THE QUIZ\n")

    // Question 1
    printf("1. What is the capital of Nepal?\n");
    printf("A. Pokhara\nB. Kathmandu\nC. Biratnagar\nD. Lalitpur\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n\n");
    }

    // Question 2
    printf("2. Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Venus\nC. Mars\nD. Jupiter\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("3. How many days are there in a leap year?\n");
    printf("A. 365\nB. 364\nC. 366\nD. 367\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 4
    printf("4. Which is the largest ocean in the world?\n");
    printf("A. Atlantic Ocean\nB. Indian Ocean\nC. Arctic Ocean\nD. Pacific Ocean\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'D' || ans == 'd') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is D.\n\n");
    }

    // Question 5
    printf("5. Which animal is known as the King of the Jungle?\n");
    printf("A. Tiger\nB. Elephant\nC. Lion\nD. Leopard\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    printf("=====================================\n");
    printf("         QUIZ COMPLETED\n");
    printf("=====================================\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent! Grade: A+\n");
    else if (score >= 4)
        printf("Very Good! Grade: A\n");
    else if (score >= 3)
        printf("Good! Grade: B\n");
    else if (score >= 2)
        printf("Pass. Grade: C\n");
    else
        printf("Fail. Better luck next time!\n");

    return 0;
}