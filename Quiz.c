#include<stdio.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

int main() {
    char name[50];
    char gender;
    int total_questions = 10;
    printf("Please Enter Your Name: ");
    gets(name);
    printf("Hi %s! Please Enter Your Gender (M/F): ", name);
    scanf(" %c", &gender); 
    char questions[][100] = {
        "1. _ is the National Bird Of India?: ",
        "2.Taj Mahal is located in which city?: ",
        "3.Which team won the ICC Men's Cricket World Cup 2023?: ",
        "4.What is the Capital of Maharashtra?: ",
        "5. Kolkata is also known as City Of _?:",
        "6.Fear of being alone is called _ ?:",
        "7.Study of earthquake is called_?: ",
        "8.What is the full form of WHO?: ",
        "9.Which city is called the City of Lakes?: ",
        "10.Who was the first President Of India?: "
    };

    //////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    char options[][100] = {
        "A. Bee", "B. Peacock", "C. Pigeon", "D. Eagle",
        "A. Delhi", "B. Lucknow", "C. Agra", "D. Mumbai",
        "A. Sri Lanka", "B. South Africa", "C. India", "D. Australia",
        "A. Jodhpur", "B. Assam", "C. Mumbai", "D. New Delhi",
        "A. Lakes", "B. Joy", "C. Ghats", "D. Gods",
        "A. Autophobia", "B. Claustrophobia", "C. Hydrophobia", "D. Acrophobia",
        "A. Seismology", "B. Biology", "C. Kinesology", "D. Cosmology",
        "A. World Harvest Organization", "B. Well Heart Organization", "C. World Health Orgazisation", "D. World High Organization",
        "A. Raipur", "B. Jaipur", "C. Udaipur", "D. Chennai",
        "A. Dr. Rajendra Prasad", "B. Mahatma Gandhi", "C. Dr. APJ Abdul Kalam", "D. Pt. Jawahlal Nehru"
    };
    char answers[10] = {'B', 'C', 'D', 'C', 'B', 'A', 'A', 'C', 'C', 'A'};
    int numberofquestions = sizeof(questions) / sizeof(questions[0]);
    char Ans;
    int score = 0;

    printf("WELCOME TO THE QUIZ\n");

    time_t start, end;
    double timeTaken;
    time(&start);

    for (int i = 0; i < numberofquestions; i++) {
        time(&end);
        timeTaken = difftime(end, start);

        if (timeTaken > 120) { 
            printf("\nTime's up! Quiz is over.\n");
            break;
        }

        printf("\n************************************************\n");
        printf("Time Remaining: %.0lf seconds\n", 120 - timeTaken);
        printf("\n************************************************\n");

        printf("%s", questions[i]);
        printf("\n************************************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }

        printf("Ans: ");
        scanf(" %c", &Ans); 

        Ans = toupper(Ans);

        if (Ans == answers[i]) {
            score++;
        } else {
            score==0;
        }
    }

    printf("\n**********************\n");
    printf("FINAL SCORE: %d / %d \n", score, numberofquestions);
    printf("Time Taken: %.0lf seconds\n", timeTaken);
    printf("********************\n");

    return 0;
}
