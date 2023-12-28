#include <stdio.h>
#include <string.h>

// Function to get the highest score from a file 22//11/2023
int getHighestScore(char *username)
{
    FILE *file = fopen("scores.txt", "r");
    if (file == NULL)
    {
        return 0; // If the file doesn't exist or cannot be opened, return 0 as the highest score.
    }

    char storedUsername[20];
    int highestScore;

    while (fscanf(file, "%s %d", storedUsername, &highestScore) == 2)
    {
        if (strcmp(username, storedUsername) == 0)
        {
            fclose(file);
            return highestScore;
        }
    }

    fclose(file);
    return 0; // Return 0 if the user's highest score is not found in the file.
}

// Function to save the highest score to a file
void saveHighestScore(char *username, int score)
{
    FILE *file = fopen("scores.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "%s %d\n", username, score);

    fclose(file);
}

//----------------------------------------------------------------------------------------------------







int main()
{
    char username[20];
    char password[20];

    // Array to store multiple usernames and passwords 20/11/2023
    char storedUsernames[][20] = {"Ealham", "Rongon", "Nusrat_Mam", "guest1", "guest2"};
    char storedPasswords[][20] = {"passcode", "rongonpass", "nusratpass", "guest1pass", "guest2pass"};

    printf("\n");
    printf("###########################################################\n");
    printf("###                                                     ###\n");
    printf("#####              Welcome To The Trivia!             #####\n");
    printf("###                                                     ###\n");
    printf("###########################################################\n");

    printf("Enter your credentials to join the quest:\n");

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    // Check if entered credentials match any stored credentials
    int userIndex = -1;
    for (int i = 0; i < 5; ++i)
    {
        if (strcmp(username, storedUsernames[i]) == 0 && strcmp(password, storedPasswords[i]) == 0)
        {
            userIndex = i;
            break;
        }
    }

    if (userIndex != -1)


        //Difficulty 20/11/2023

    {
        int difficulty;

        printf("\nChoose your difficulty level:\n");
        printf("1. Easy\n");
        printf("2. Medium\n");
        printf("3. Hard\n");
        printf("4. Expert\n");
        printf("Type Here: ");
        scanf("%d", &difficulty);

        int score = 0;

        // Your quiz questions and answers based on difficulty level go here
        switch (difficulty)
        {
        case 1: // Easy
            // Include easy-level questions


            printf("\nQ1.In what year did humans first set foot on the moon? \n1) 1969 \n2) 1979 \n3) 1989 \n4) 1999\n");
            printf("Type Here:");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nWrong Answer! \nThe correct answer is 1. 1969");
                break;
            }

            printf("\nQ2.Who is the co-founder of Apple Inc.? \n1.Bill Gates \n2.Mark Zuckerberg \n3.Steve Jobs \n4.Jeff Bezos\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 3:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 3. Steve Jobs");
                break;
            }

            printf("\nQ3.Which continent is home to the Sahara Desert, the largest hot desert in the world? \n1.South America \n2.Africa \n3.Asia \n4.Australia\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 2:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is  2. Africa");
                break;
            }

            printf("\nQ4.In what year did Bangladesh gain independence from Pakistan? \n1.1965 \n2.1971 \n3.1980 \n4.1990\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 2:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 2. 1971");
                break;
            }

            printf("\nQ5.Which animal is known as the -king of the jungle? \n1.Elephant \n2.Lion \n3.Tiger \n4.Gorilla\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 2:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is  3. Lion");
                break;
            }

            break;

//-----------------------------------------------------------------






        case 2: // Medium
            // Include medium-level questions



            printf("\nQ1. What is the name of the largest moon of Saturn? \n1. Europa \n2. Titan \n3. Ganymede \n4. Triton\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 2:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 2. Titan");
                break;
            }

            printf("\nQ2. Which programming language is often used for developing mobile applications for iOS devices? \n1. Java \n2. Python \n3. Swift \n4. C++\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 3:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 3. Swift");
                break;
            }

            printf("\nQ3. Which strait separates Africa from Europe and connects the Mediterranean Sea to the Atlantic Ocean? \n1. Bosporus Strait \n2. Gibraltar Strait \n3. Malacca Strait \n4. English Channel\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 2:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 2. Gibraltar Strait ");
                break;
            }

            printf("\nQ4. Which political ideology was central to Adolf Hitler's regime in Nazi Germany during the 1930s and 1940s? \n1. Imperialism \n2. Fascism \n3. Communism \n4. National Socialism\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 4:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 4. National Socialism");
                break;
            }

            printf("\nQ5. Which mammal is capable of flight and is the only one naturally capable of sustained flight? \n1. Bat \n2. Flying Squirrel \n3. Pegasus\n4. Peregrine Falcon\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 2. Bat");
                break;
            }


            break;

//---------------------------------------------------------------






        case 3: // Hard
            // Include hard-level questions


            printf("\nQ1. What is the name for a region in space where gravity is so strong that nothing, not even light, can escape? \n1. Dark Matter \n2. Wormhole \n3. Event Horizon \n4. Black Hole\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 4:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 4. Black Hole");
                break;
            }

            printf("\nQ2. In computer science, what is the Halting Problem, and who formulated it? \n1. Alan Turing \n2. Ada Lovelace \n3. Grace Hopper \n4. John von Neumann\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. Alan Turing");
                break;
            }

            printf("\nQ3. In the 1971 Bangladesh Liberation War, what was the name of the military operation that targeted intellectuals and professionals? \n1. Desert Storm \n2. Rolling Thunder \n3. Operation Searchlight \n4. Blue Star\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 3:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 3. Operation Searchlight");
                break;
            }

            printf("\nQ4. What is the chemical symbol for water? \n1. H2O \n2. CO2 \n3. CH4 \n4. O2\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. H2O");
                break;
            }

            printf("\nQ5. Which species of cephalopod is known for its intelligence, ability to mimic various marine creatures, and complex problem-solving skills? \n1. Cuttlefish \n2. Nautilus \n3. Giant Squid \n4. Chambered Nautilus\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. Cuttlefish");
                break;
            }


            break;

//-----------------------------------------------------------------






        case 4: // Expert (Only Ealham can solve)
            // Include expert-level questions



            printf("\nQ1. What is the explosive event that occurs when a massive star collapses under gravity? \n1. Supernova \n2. Nebula \n3. Quasar \n4. Pulsar\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. Supernova");
                break;
            }

            printf("\nQ2. What cryptographic protocol secures online transactions and communication over the Internet? \n1. SSL/TLS \n2. SSH \n3. IPsec \n4. PGP\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. SSL/TLS");
                break;
            }

            printf("\nQ3. What is the capital city of Lesotho, the only independent state in the world entirely above 1,000 meters (3,281 feet) in elevation? \n1. Maseru \n2. Suva \n3. Quito \n4. Asunción\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. Maseru");
                break;
            }

            printf("\nQ4. During the medieval period, what famous trade route connected the East and West, facilitating the exchange of goods, ideas, and cultures? \n1. Silk Road \n2. Spice Route \n3. Trans-Saharan Trade Route \n4. Amber Road\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 1. Silk Road");
                break;
            }

            printf("\nQ5. What is the name of the small, nocturnal mammal found in Madagascar that communicates using a variety of vocalizations, including complex songs, and is known for its unique finger-like appendages? \n1. Tarsier \n2. Aye-Aye \n3. Fossa \n4. Lemur\n");
            printf("Type Here:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 2:
                puts("Correct!");
                score++;
                break;
            default:
                puts("\nT_T Wrong!\nThe correct answer is 2. Aye-Aye");
                break;
            }


            break;


//-------------------------------------------------------------

        default:
            printf("Invalid difficulty level.\n");
            return 1;
        }

//-------------------------------------------------------------







        // level Update 20/09/2023
        int level = 1;
        if (score >= 5)
        {
            level = 2;
        }
        if (score >= 10)
        {
            level = 3;
        }

        if (score >= 15)
        {
            level = 4;
        }
        if (score >= 20)
        {
            level = 5;
        }


//-----------------------------------------------------------







// Display level and score 20/11/2023 edited
printf("\n");
printf("###########################################################\n");
printf("                                                           \n");
printf("         Congratulations, %s! Your score is %d.            \n", username, score);
printf("                You are now on Level %d!                   \n", level);

// Get and display the highest score
int highestScore = getHighestScore(username);
printf("                Your highest score is %d.                  \n", highestScore);

// Save the new score if it's higher than the previous highest score
if (score > highestScore)
{
    saveHighestScore(username, score);
    printf("                New highest score saved!                  \n");
}

printf("                                                           \n");
printf("###########################################################\n");

    }
    else
    {
        printf("\nAccess Denied! Your journey ends here.\n");
        printf("    Prepare for the next battle!\n");
        printf("____________________________________________\n");
        return 1;
    }

    return 0;
}
