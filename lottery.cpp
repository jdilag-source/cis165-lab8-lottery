#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    const int DIGIT_RANGE = 10; // digits 0 through 9

    int winningDigits[SIZE];
    int player[SIZE];
    int matchCount = 0;

    // Seed once, before generating any digits
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate the winning digits
    for (int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % DIGIT_RANGE;
    }

    // Read the player's digits
    cout << "Enter " << SIZE << " digits (0-9), separated by spaces: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> player[i];
    }

    // Compare same positions only
    for (int i = 0; i < SIZE; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matchCount++;
        }
    }

    // Display results
    cout << "Winning digits: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << winningDigits[i] << " ";
    }
    cout << endl;

    cout << "Player digits:  ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << player[i] << " ";
    }
    cout << endl;

    cout << "Number of matching positions: " << matchCount << endl;

    return 0;
}
