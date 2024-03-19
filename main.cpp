#include <iostream>
#include <unistd.h> // For sleep function
#include <limits>   // For numeric_limits
using namespace std;

void explainThisProgram()
{
    cout << "A perfect number is a positive integer that is equal to the sum of its proper divisors." << endl;
    cout << "For example, 6 is a perfect number because 6 = 1 + 2 + 3." << endl;
    cout << "This program will find perfect numbers up to a given limit." << endl
         << endl;
}

bool isPerfectNumber(unsigned long long number)
{
    unsigned long long sum = 0;
    for (unsigned long long i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum == number;
}

void findPerfectNumbers(unsigned long long limit)
{
    // if limit is -1 then it will run forever
    for (unsigned long long i = 1; i <= limit; i++)
    {
        cout << "Finding..." << i;
        cout.flush();
        cout << "\r";
        cout.flush();
        usleep(100);
        if (isPerfectNumber(i))
        {
            cout << i << " is a perfect number" << endl;
        }
    }
}

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    explainThisProgram();

    unsigned long long limit;
    cout << "Enter the limit: (Enter -1 to run forever)" << endl;
    cin >> limit;
    if (limit == -1)
        limit = numeric_limits<unsigned long long>::max();

    // Clear the screen
    clearScreen();
    explainThisProgram();

    cout << "Looking for perfect numbers up to ";
    cout << limit << endl;
    cout << "Press Ctrl + C to stop" << endl
         << endl;

    findPerfectNumbers(limit);
    return 0;
}
