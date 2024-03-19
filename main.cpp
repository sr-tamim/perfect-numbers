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

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    findPerfectNumbers(limit);
    return 0;
}
