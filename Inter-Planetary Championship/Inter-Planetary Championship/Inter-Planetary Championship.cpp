#include <iostream>

int main() {

    double weight;
    int x;

    std::cout << "please enter your current weight: ";
    std::cin >> weight;

    std::cout << "\nI have information on these planets\n\n";
    std::cout << "1. Mercury  2. Venus  3. Mars  4. Jupita\n";
    std::cout << "5. Saturn  6. Uranus  7. Neptune\n\n";

    std::cout << "Which planetary championship do you wish to conquer?";
    std::cin >> x;

    if (x == 1) {
        weight = weight * 0.38;
    }

    else if (x == 2) {
        weight = weight * 0.78;
    }

    else if (x == 3) {
        weight = weight * 0.39;
    }

    else if (x == 4) {
        weight = weight * 2.65;
    }

    else if (x = 5) {
        weight = weight * 1.17;
    }

    else if (x = 6) {
        weight = weight * 1.05;
    }
    else if (x = 7) {
        weight = weight * 1.23;
    }

    std::cout << "\nYour weight is: " << weight << "\n";

}