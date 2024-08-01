#include <iostream>
#include <cstdlib> // Required for the exit() function

int main() {
    int counter = 0;
    while (true) {
        switch (counter) {
            case 0:
                std::cout << "Case 0\n";
                counter++;
                exit(0); // Terminates the program
            case 1:
                std::cout << "Case 1\n";
                counter++;
                exit(0); // Terminates the program
            // other cases
        }
    }

    // This line will never be reached
    std::cout << "This line will not be executed\n";
    return 0;
}
