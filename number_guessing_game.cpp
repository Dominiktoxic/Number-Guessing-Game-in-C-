#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    int num = rand() % 100 + 1;
    int guess;
    int tries;

    std::cout << "**************** NUMBER GUESSING GAME **************** \n";

    do {
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high! \n";
        } else if (guess < num) {
            std::cout << "Too low! \n";
        } else {
            std::cout << "Correct! You guessed the number " << num << " in " << tries << " guesses! \n";
            break;
        }

    } while (guess != num);

    std::cout << "****************************************************** \n";

    return 0;
}