#include <iostream>
#include <unistd.h> // For sleep function
#include <limits>   // For numeric_limits
#include <cmath>    // For pow function
using namespace std;

void explainThisProgram()
{
    cout << "A perfect number is a positive integer that is equal to the sum of its proper divisors." << endl;
    cout << "For example, 6 is a perfect number because 6 = 1 + 2 + 3." << endl;
    cout << "This program will find perfect numbers up to a given limit." << endl
         << endl;
}

bool isPrime(unsigned long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (unsigned long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void findPerfectNumbers(unsigned long long limit)
{
    for (unsigned long long p = 2; true; p++)
    {
        unsigned long long mp = pow(2, p) - 1;
        cout << "Finding..." << mp;
        cout.flush();
        cout << "\r";
        cout.flush();
        usleep(100000);
        // check if the calculation will overflow
        if (mp > limit / pow(2, p - 1))
        {
            cout << "The limit is reached. Last Mersenne prime is " << mp << endl;
            break;
        }
        if (isPrime(mp))
        {
            unsigned long long perfectNumber = pow(2, p - 1) * mp;
            cout << perfectNumber << " is a perfect number" << endl;
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

    unsigned long long limit = numeric_limits<unsigned long long>::max();

    // Clear the screen
    clearScreen();
    explainThisProgram();

    cout << "Your system can handle up to ";
    cout << limit << endl;
    cout << "Press Ctrl + C to stop" << endl
         << endl;

    findPerfectNumbers(limit);
    return 0;
}
