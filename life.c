#include <stdio.h>

void fail()
{
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("LOL YOU FAIL ");
    }
    
}

int main()
{
    int choice;
    int age;
    printf("Welcome to Life Simulator\n");
    printf("Enter your age to continue\n");
    scanf("%d", &age);
    if (age < 10)
    {
        printff("you are to play\n");
    }
    else
    {
        int gender;
        printf("You are enter but enter your gender\nMale for 1\nFemale for 2\n");
        scanf("%d", &gender);
        switch (gender)
        {
        case 1:
            printf("You born as a boy");
            // add life of a boy and make some challnages

            printf("DAD: Hello son what you learn in school\nEnglish = 1 (Lie)\nMaths = 2 (Truth)\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                printf("DAD: ok lets check what is the second latter of Dinosaur\n I = 1\n D = 2\n");
                printf("But hey today is not the period of English so you fail!");
                fail();
            }
            else if (choice == 2)
            {
                printf("DAD: what's 6 x 7 + 9 - 1 = ?\n");
                scanf("%d", &choice);
                if (choice == 50)
                {
                    printf("Good");
                }
                else
                {
                    fail();
                }
                
            }
            
            
            break;
        case 2:
            printf("You born as a girl");
            // make it 
        default:
            break;
        }
    }
    
    return 0;
}


