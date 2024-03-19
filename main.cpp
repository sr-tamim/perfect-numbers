#include <iostream>
#include <unistd.h> // For sleep function
using namespace std;

bool isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

void findPerfectNumbers(int limit) {
    // if limit is -1 then it will run forever
    for (int i = 1; limit == -1 || i <= limit; i++) {
        cout << "Finding..." << i;
        cout.flush();
        cout << "\r";
        cout.flush();
        usleep(100);
        if (isPerfectNumber(i)) {
            cout << i << " is a perfect number" << endl;
        }
    }
}

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    cout << "A perfect number is a positive integer that is equal to the sum of its proper divisors." << endl;

    int limit;
    cout << "Enter the limit: (Enter -1 to run forever)" << endl;
    cin >> limit;
    clearScreen();

    cout << "Looking for perfect numbers up to ";
    if (limit == -1) {
        cout << "infinity" << endl;
    } else {
        cout << limit << endl;
    }
    cout << "Press Ctrl + C to stop" << endl << endl;

    findPerfectNumbers(limit);
    return 0;
}
