// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 10/10/2024
// Date Completed: 10/10/2024
// Date Submitted: 10/10/2024


// This program generates a random number and asks the user to guess it.

#include <iostream> // Header file allowing the use of input/output objects.
#include <cstdlib>  // Header file allowing the use of random function.
#include <ctime>    // Header file allowing working with time.
using namespace std;    // Use standard namespace.

int main()  // Main function is the starting point of the program execution.
{
    int iRandNum, iGuessNum, iAttemptCount = 1; // Declare the variables for the generated and guessed numbers, initialize the attempt counter.
    const int MIN_NUM = 10, MAX_NUM = 20;   // Initialize the minimum and maximum generated numbers.

    unsigned seed = time(0);    // Set the time to generate random numbers.
    srand(seed);    // Seed the random number generator.

    iRandNum = rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM;  // Generate a random number using the rand function.

    // Prompt the user to guess the generated number.
    cout << "I have generated a random number between " << MIN_NUM << " and " << MAX_NUM << "." << endl;
    cout << "Guess the number: ";
    cin >> iGuessNum;   // Store the input in the iGuessNum variable.

    // Loop until the user guesses the correct number.
    while (iGuessNum != iRandNum)   // Execute the block while the user's input is not equal to the generated number.
    {
        if (iGuessNum < iRandNum)   // Check if the user's input is less than the generated number.
            cout << "Too low. Try again: "; // Display the message informing the user that the guessed number is too low.
        else
            cout << "Too high. Try again: ";    // Display the message informing the user that the guessed number is too high.
        cin >> iGuessNum;   // Store the input in the iGuessNum variable.
        iAttemptCount++;    // Increment the number of attempts.
    }

    // Display the message indicating that the user guessed the correct number.
    if (iAttemptCount == 1) // Check if the user guessed the number in 1 attempt.
        cout << "Congratulations! You guessed the number in " << iAttemptCount << " attempt." << endl;  // Display the message for 1 attempt.
    else    // Display the message for the number of attempts different than 1.
        cout << "Congratulations! You guessed the number in " << iAttemptCount << " attempts." << endl;

    return 0;   // Return 0 to the operating system to indicate that the program executed successfully.
}
