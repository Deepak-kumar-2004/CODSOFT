#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    
    int attempts = 0;
    int guess;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100." << std::endl;
    std::cout << "Try to guess it." << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        
        attempts++;
        
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts." << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Try a higher number." << std::endl;
        } else {
            std::cout << "Try a lower number." << std::endl;
        }
    }

    return 0;
}
