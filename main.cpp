#include <iostream>
#include <math.h>
#include <time.h>


int main () {

    srand (time(NULL));
    int selection;

    int rps = rand() % 3 + 1;

    std::cout << "Welcome to Rock, Paper, Scissors \n Choose your weapon: \n 1. Rock \n 2. Paper \n 3. Scissors \n";
    std::cout << "\nSelection: ";
    std::cin >> selection;

    std::cout << "\nRock... \n";
    std::cout << "Paper... \n";
    std::cout << "Scissors... \n";
    std::cout << "Shoot! \n";

    if (selection == 1 && rps == 3) {
        std::cout << "\nYou win!\n";
    } else if (selection == 3 && rps == 2) {
        std::cout << "\nYou win!\n";
    } else if (selection == 2 && rps == 1) {
        std::cout << "\nYou win!\n";
    } else if (selection == rps) {
        std::cout << "\nTie, try again!\n";
    } else {
        std::cout << "\nYou lost!\n";
    }

    std::cout << "Computer chose: ";

    switch (rps) {
        case 1:
        std::cout << "Rock";
        break;
        case 2:
        std::cout << "Paper";
        break;
        case 3:
        std::cout << "Scissors";
        break;
    };

    while (selection == rps) {
        int rps = rand() % 3 + 1;

        std::cout << "Choose your weapon: \n 1. Rock \n 2. Paper \n 3. Scissors \n";
        std::cout << "\nSelection: ";
        std::cin >> selection;

        std::cout << "\nRock... \n";
        std::cout << "Paper... \n";
        std::cout << "Scissors... \n";
        std::cout << "Shoot! \n";

        if (selection == 1 && rps == 3) {
            std::cout << "\nYou win!\n";
        } else if (selection == 3 && rps == 2) {
            std::cout << "\nYou win!\n";
        } else if (selection == 2 && rps == 1) {
            std::cout << "\nYou win!\n";
        } else if (selection == rps) {
            std::cout << "\nTie, try again!\n";
        } else {
            std::cout << "\nYou lost!\n";
        }


        std::cout << "Computer chose: ";

        switch (rps) {
            case 1:
            std::cout << "Rock";
            break;
            case 2:
            std::cout << "Paper";
            break;
            case 3:
            std::cout << "Scissors";
            break;
        };
    }

}