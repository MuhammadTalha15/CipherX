#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

void SetConsoleColor(int textColor, int bgColor)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

string encryptPassword(string character)
{
    cout << "\nEnter a String\n";
    getline(cin, character);

    cout << "Encodded String is: `";
    for (char c : character)
    {
        cout << int(c) << " ";
    }

    return character;
}

int main()
{

    // SetConsoleColor(1, 1);
    // cout << "This text is white on a blue background." << std::endl;

    string characterString;
    int userChoice;

    cout << "\n";
    cout << " $$$$$\\  $$\\           $$\\                          $$\\   $$\\ " << endl;
    cout << "$$  __$$\\ \\__|          $$ |                         $$ |  $$ |" << endl;
    cout << "$$ /  \\__|$$\\  $$$$$$\\  $$$$$$$\\   $$$$$$\\   $$$$$$\\ \\$$\\ $$  |" << endl;
    cout << "$$ |      $$ |$$  __$$\\ $$  __$$\\ $$  __$$\\ $$  __$$\\ \\$$$$  / " << endl;
    cout << "$$ |      $$ |$$ /  $$ |$$ |  $$ |$$$$$$$$ |$$ |  \\__|$$  $$<  " << endl;
    cout << "$$ |  $$\\ $$ |$$ |  $$ |$$ |  $$ |$$   ____|$$ |     $$  /\\$$\\ " << endl;
    cout << "\\$$$$$$  |$$ |$$$$$$$  |$$ |  $$ |\\$$$$$$$\\ $$ |     $$ /  $$ |" << endl;
    cout << " \\______/ \\__|$$  ____/ \\__|  \\__| \\_______|\\__|     \\__|  \\__|" << endl;
    cout << "              $$ |                                             " << endl;
    cout << "              $$ |                                             " << endl;
    cout << "              \\__|                                             " << endl;

    cout << "Your Open Source String Encryptor:\n\n";

    cout << "[1] String Encryption: " << endl;
    cout << "[2] String Dcryption: " << endl;
    cout << "[3] Exit App: " << endl;
    cout << "Enter your Choice: ";
    cin >> userChoice;
    cin.ignore();

    if (userChoice == 3)
    {
        cout << "\nExiting the Application...";
        SetConsoleColor(7, 0); // 7 for light grey, 0 for black
        return 0;
    }
    else if (userChoice == 1)
    {
        encryptPassword(characterString);
        getch();
    }
    else
    {
        cout << "You chose Dcryption!";
        SetConsoleColor(7, 0); // 7 for light grey, 0 for black
        // std::cout << "This text is the default color." << std::endl;
    }

    return 0;
}