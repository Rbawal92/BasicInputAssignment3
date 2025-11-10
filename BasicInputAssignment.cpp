/*
Name: Raymond Bawal III
Date: November 4 , 2025
Section: ITCS 2530 C++
BasicInputAssignment.cpp

A program that does the following:
USER INPUT
Create a friendly introduction banner to welcome the user to your program.
Prompt the user for at least three inputs of mixed types (e.g., string name with spaces, int count, double price/time) related to your assigned hobby or interest (as indicated in List of Student "Hobby or Interest".
Your code should handle invalid input (refer to the concepts in chapter 3).
Compute at least one derived value tied to the hobby (e.g., average lap time, total cost, win/loss ratio).
FORMATTED 
Present a pretty summary table using setw and alignment. For any floating-point result, use a sensible precision.
Save the pretty formatted report to a file named report.txt.

SELECTION STATEMENTS
A menu implemented with switch (e.g., 1=Add session, 2=View weekly report, 3=Recommend level).
At least two if/else blocks using compound Boolean conditions (e.g., if (hours >= 5 && budget <= 20) ...).
Note: Since this is the crux of the chapter, the above code should be explained thoroughly in your demonstration video.
REPETITION
Include at least three of the following:
One for loop that runs a fixed number of times.
One while loop that continues based on a condition (e.g., user input or data validation).
One do-while loop that repeats until the user decides to quit.
** Copied from assignment instructions above for reference. **

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>    
#include "windows.h"
using namespace std; //Needed for system("pause") on Windows OS

int main()
{
	bool runAgain = true; //do loop control variable

    do {
        HANDLE headerColor = GetStdHandle(STD_OUTPUT_HANDLE);

        //  Variables & constants 
        string videoGame;
        string gamingPlatform;
        string favoriteCharacter;
        int age;
        string programName = "Fun with Video Games and the First Steps of My Journey in UX Design";
        const int  childAge = 7;
        int        ageDifference;
        double gamePrice;
        int    hoursPlayed;
        double gameValue; // value per hour
        const int    minAge = 0;
        const int    maxAge = 110;

        //  money/value 
        const double minGamePrice = 0.0;
        const int    minHoursPlayed = 0;

        const double superValue = 1.00;  // $/hr
        const int    maxPrice = 70;    // $
        const double midPrice = 2.00;  // $/hr
        const int    maxHours = 40;    // hours
        const int    midHours = 20;    // hours
        const double lowValue = 1.00;  // $/hr
        const double goodValue = 50.00; // $
        const double justBelowMax = 60.00; // $

        // ratings
        int story, gameplay, graphics, nastalgia, replay;
        string recommendation;
        string valueTier;

        int menuChoice;
        char userChoice; // y/n

		// Title Banner
        SetConsoleTextAttribute(headerColor, 11);
        cout << string(90, '*') << endl;
        cout << "*" << setw(89) << "*" << endl;
        cout << "*" << setw(89) << "*" << endl;
        cout << "*" << setw(89) << "*" << endl;
        cout << "*" << string(9, ' ') << setw(10) << programName << setw(13) << "*" << endl;
        cout << "*" << setw(89) << "*" << endl;
        cout << "*" << setw(89) << "*" << endl;
        cout << "*" << setw(89) << "*" << endl;
        cout << string(90, '*') << endl;

        system("pause");
        system("cls");

        // inputs
        cout << "\nEnter the name of your favorite video game.\n";
        getline(cin, videoGame);

        cout << "\nEnter the name of your favorite character.\n";
        getline(cin, favoriteCharacter);

        cout << "\nEnter the gaming platform you used to play your favorite game on.\n";
        getline(cin, gamingPlatform);

        cout << "\nEnter your age in years in a whole number.\n";
        while (!(cin >> age) || age <= minAge || age >= maxAge) {
            cout << "Age must be a positive whole number between 1 and 109. Please try again.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "\nThank you for providing your age as " << age << " years old.\n" << endl;
        cout << "\nYou were " << age << " Years old and loved to play the game " << videoGame
            << " on the game system. " << gamingPlatform << endl;

        ageDifference = age - childAge;
        cout << "\nYour favorite character from that game is " << favoriteCharacter << endl;

        if (ageDifference >= 0) {
            cout << "You are " << ageDifference
                << " years older than I was when I started playing my favorite game! \n" << endl;
        }
        else {
            cout << "\nYou were younger than I was when I started playing my favorite game! \n" << endl;
        }

        system("pause");
        system("cls");

        
        cout << "My name is Raymond and my favorite game of all time is Pokemon Red, more for the nostalgia factor.\n"
            << "My favorite character was Charizard, but I loved Gyarados as well.\n"
            << "I used to play it on my Gameboy Color when I was the age of " << childAge << " years old!\n"
            << "I remember one of the first times using dial-up internet to find this cheat!\n"
            << "There was the rare candy cheat where you could level up your Pokemon instantly!\n"
            << "To get the rare candies you would have to encounter the glitch Pokemon Missingno.\n"
            << "Which would appear on the right side of the screen when you surfed along the shore of Cinnabar Island.\n"
            << "It would duplicate the item in the 6th slot of your inventory!\n"
            << "What fun times it was!\n" << endl;
        cout << "Thank you for sharing your favorite game " << videoGame
            << " and character " << favoriteCharacter << " with me!\n" << endl;
        system("pause");
        system("cls");

		//Price and hours played
        cout << "Now lets see if that game was worth buying!\n" << endl;

        cout << "Enter the price you paid for the game in dollars and cents (example 59.99).\n";
        while (!(cin >> gamePrice) || gamePrice < minGamePrice) {
            cout << "Invalid input for price. Please enter a number like 59.99 or 20.00: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Enter the number of hours you think you played the game in a whole integer.\n";
        while (!(cin >> hoursPlayed) || hoursPlayed <= minHoursPlayed) {
            cout << "Invalid input for hours played. Please enter a whole number greater than 0: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << fixed << setprecision(2);
        cout << "\nYou paid $" << gamePrice << " for " << videoGame
            << " and have played it for " << hoursPlayed << " hours.\n";

        gameValue = gamePrice / hoursPlayed;
        cout << "\nThat means you have paid $" << gameValue << " per hour of gameplay!\n"
            << "\nWhen you think about it that is not a bad value for a game!\n" << endl;

        cout << "\nI sure think that Pokemon Red was worth every penny and hour I put into it back in the day!\n" << endl;
        cout << "UX design is all about user experience and making things enjoyable and fun for the user!\n"
            << "Just like how video games are designed to be fun and engaging for the player!\n"
            << "I would consider the title box of this program to be a miniscule example of UX design!\n"
            << "Lets go deeper into UX design and data to see a summary of some of the cool stuff we learned about each other's gaming preferences!\n" << endl;

        system("pause");
        system("cls");
		//Value Tier System explanation 
        cout << "I have played many games over the years and I would like to share a value tier system for game value per hour played!\n";
        cout << "Pokemon Red, Elder Scrolls V: Skyrim, and God of War are some of my favorite games of all time!\n";
        cout << "I put 40 hours or more into each of those games and got great value for my money!\n";
        cout << "So I will have 3 tiers Super Tier, Good Tier , and Low Tier for game value per hour played!\n";
        cout << "Also I will take game value into consideration for this tier system!\n";

        system("pause");
        system("cls");

        //
        SetConsoleTextAttribute(headerColor, 11);
        cout << string(90, '*') << endl;
        cout << "*" << setw(50) << "Game Tier Evaluation" << setw(39) << "*" << endl;
        cout << string(90, '*') << endl;

        if (hoursPlayed >= maxHours && gameValue <= superValue && gamePrice <= maxPrice) {
            valueTier = "Super Tier";
            cout << "After analyzing your game data, " << videoGame
                << " was a Super Tier game and a phenomenal value!\n";
        }
        else if (hoursPlayed >= midHours && gameValue <= midPrice && gamePrice <= maxPrice) {
            valueTier = "Good Tier";
            cout << "After analyzing your game data, " << videoGame
                << " was not the best value but money does not judge everything.\n";
        }
        else {
            valueTier = "Low Tier";
            cout << "After analyzing your game data, " << videoGame
                << " is not a great value, but if it is your favorite game that’s what matters.\n";
        }

        system("pause");
        system("cls");

        // --- Recommendation text ---
        if ((hoursPlayed >= maxHours && gameValue <= lowValue) || (gamePrice <= goodValue && hoursPlayed >= 25)) {
            recommendation = "I would highly recommend this game to a friend!";
        }
        else if ((hoursPlayed >= 15 && gameValue <= superValue) || (gamePrice <= justBelowMax && hoursPlayed >= 10)) {
            recommendation = "I would recommend this game to a friend.";
        }
        else {
            recommendation = "I would not recommend this game to a friend.";
        }

        cout << "\nYour favorite game " << videoGame
            << " was it the value you thought? $" << gameValue << endl;

        // --- Ratings ---
        cout << "I have asked many questions but UX design is all about understanding the user!\n";
        cout << "Lets rate your game's overall experience from 1 to 5!\n";
        // hopefully make this alot simpler with an Array
        cout << "Story rating 1 - 5\n";
        while (!(cin >> story) || story < 1 || story > 5) {
            cout << "Invalid input must be between 1 and 5. Please try again: ";
            cin.clear(); cin.ignore(10000, '\n');
        }

        cout << "Gameplay rating 1 - 5\n";
        while (!(cin >> gameplay) || gameplay < 1 || gameplay > 5) {
            cout << "Invalid input must be between 1 and 5. Please try again: ";
            cin.clear(); cin.ignore(10000, '\n');
        }

        cout << "Graphics rating 1 - 5\n";
        while (!(cin >> graphics) || graphics < 1 || graphics > 5) {
            cout << "Invalid input must be between 1 and 5. Please try again: ";
            cin.clear(); cin.ignore(10000, '\n');
        }

        cout << "Nastalgia rating 1 - 5\n"; 
        while (!(cin >> nastalgia) || nastalgia < 1 || nastalgia > 5) {
            cout << "Invalid input must be between 1 and 5. Please try again: ";
            cin.clear(); cin.ignore(10000, '\n');
        }

        cout << "Replayability rating 1 - 5\n";
        while (!(cin >> replay) || replay < 1 || replay > 5) {
            cout << "Invalid input must be between 1 and 5. Please try again: ";
            cin.clear(); cin.ignore(10000, '\n');
        }

        int ratingSum = story + gameplay + graphics + nastalgia + replay;
        const int numberOfRatings = 5;

		//compute average rating
        double avgRating = static_cast<double>(ratingSum) / numberOfRatings;

        cout << fixed << setprecision(2);
        cout << "\nYour average rating for " << videoGame << " is: " << avgRating << " out of 5.\n\n";

		// summary table
        SetConsoleTextAttribute(headerColor, 11);
        cout << string(90, '*') << endl;
        cout << "*" << setw(50) << "Summary of Your Gaming Preferences" << setw(39) << "*" << endl;
        cout << string(90, '*') << endl;

        cout << left << setw(30) << "Data Collected " << setw(40) << "Your Input" << endl;
        cout << string(90, '-') << endl;

        cout << left << setw(30) << "Favorite Game: " << setw(40) << videoGame << endl;
        cout << left << setw(30) << "Favorite Character: " << setw(40) << favoriteCharacter << endl;
        cout << left << setw(30) << "Gaming Platform: " << setw(40) << gamingPlatform << endl;
        cout << left << setw(30) << "Your Age: " << setw(40) << age << endl;
        cout << left << setw(30) << "Game Price: " << "$" << setw(39) << gamePrice << endl;
        cout << left << setw(30) << "Hours Played: " << setw(40) << hoursPlayed << endl;
        cout << left << setw(30) << "Value per Hour Played: " << "$" << setw(39) << gameValue << endl;

		// Avg Rating display
        cout << left << setw(30) << "Average Rating (1-5): " << setw(40) << avgRating << endl;

        cout << left << setw(30) << "Recommendation: " << setw(40) << recommendation << endl;
        cout << left << setw(30) << "Value Tier: " << setw(40) << valueTier << endl;
        cout << string(90, '-') << endl;

		//save report to file
        ofstream report("report.txt");
        if (report) {
            report << left << setw(30) << "Favorite Game: " << setw(40) << videoGame << endl;
            report << left << setw(30) << "Favorite Character: " << setw(40) << favoriteCharacter << endl;
            report << left << setw(30) << "Gaming Platform: " << setw(40) << gamingPlatform << endl;
            report << left << setw(30) << "Your Age: " << setw(40) << age << endl;
            report << left << setw(30) << "Game Price: " << "$" << setw(39) << gamePrice << endl;
            report << left << setw(30) << "Hours Played: " << setw(40) << hoursPlayed << endl;
            report << left << setw(30) << "Value per Hour Played: " << "$" << setw(39) << gameValue << endl;

           


            report << left << setw(30) << "Average Rating (1-5): " << setw(40) << avgRating << endl;

            report << left << setw(30) << "Recommendation: " << setw(40) << recommendation << endl;
            report << left << setw(30) << "Value Tier: " << setw(40) << valueTier << endl;
            report << string(90, '-') << endl;
            report.close();
            cout << "A summary report has been saved to report.txt\n" << endl;
        }
        else {
            cout << "Could not open report.txt for writing.\n";
        }

        system("pause");
        system("cls");

		// selection menu
        SetConsoleTextAttribute(headerColor, 11);
        cout << string(52, '*') << endl;
        cout << "*" << setw(50) << "Selection Menu" << "*" << endl; 
        cout << string(52, '*') << endl;

        do {
            cout << "1.) See Value Assumption again\n";
            cout << "2.) See Summary Table Again \n";
            cout << "3.) Exit Program \n";
            cout << "Please enter option (1-3): ";

            while (!(cin >> menuChoice) || menuChoice < 1 || menuChoice > 3) {
                cout << "Invalid input must be 1-3. Please try again: ";
                cin.clear();
                cin.ignore(10000, '\n');
            }

            switch (menuChoice) {
            case 1:
                cout << "\nValue Assumption: price $" << gamePrice
                    << "  — value estimate is $" << gameValue << " per hour!\n";
                cout << "I hope you were still happy with the value of the game \n" << videoGame << "\n\n";
                break;
            case 2:
                cout << "\n--- Summary Again! ---\n";
                cout << left << setw(30) << "Favorite Game: " << setw(40) << videoGame << endl;
                cout << left << setw(30) << "Favorite Character: " << setw(40) << favoriteCharacter << endl;
                cout << left << setw(30) << "Gaming Platform: " << setw(40) << gamingPlatform << endl;
                cout << left << setw(30) << "Your Age: " << setw(40) << age << endl;
                cout << left << setw(30) << "Game Price: " << "$" << setw(39) << gamePrice << endl;
                cout << left << setw(30) << "Hours Played: " << setw(40) << hoursPlayed << endl;
                cout << left << setw(30) << "Value per Hour Played: " << "$" << setw(39) << gameValue << endl;

                // 
                cout << left << setw(30) << "Average Rating (1-5): " << setw(40) << avgRating << endl;

                cout << left << setw(30) << "Recommendation: " << setw(40) << recommendation << endl;
                cout << left << setw(30) << "Value Tier: " << setw(40) << valueTier << endl;
                cout << string(90, '-') << endl << endl;
                break;
            case 3:
                cout << "\nThanks for trying my program. ";
                break;
            default:
                cout << "\nUnknown Option.\n";
                break;
            }
        } while (menuChoice != 3);

        cout << endl;
        cout << "Do you want to run the program again y/n: ";
        cin >> userChoice;
        userChoice = static_cast<char>(tolower(static_cast<unsigned char>(userChoice))); // FIX: safer tolower
        runAgain = (userChoice == 'y');
        cout << endl;

    } while (runAgain);

    cout << "Thanks for trying my program sincerely Raymond. Goodbye\n";
    return 0;
}