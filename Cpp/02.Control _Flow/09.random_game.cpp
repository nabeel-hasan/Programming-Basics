// --------------------- Building a random number game --------------------//

#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cout;
using std::cin;
using std::endl;


void play_game()
{
    int number, guess;
    number = rand() % 10;
    cout << "Enter your guess: ";

    while(true)
    {
        cin >> guess;

        if(guess == number)
        {
            cout << "Hurray ! You guessed the right number" << endl;
            break;
        }
        else if(guess > number)
        {
            cout << "Your guess is on higher side" << endl;
        }
        else
        {
            cout << "Your guess is on lower side" << endl;
        }
    }
}


int main()
{
    int choice;
    srand(time(NULL));

    cout << "Enter 0 : Leave the game" << endl;
    cout << "Enter 1 : Enter the game" << endl;

    do
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 0:
                cout << "Return again some time!";
                return 0;

            case 1:
                cout << "Welcome to the game\n";
                play_game();
                break;
        }
    }while(choice != 0);

}
