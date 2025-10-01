#include <iostream>
#include <string>
#include <windows.h>
#include <sstream>
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

    cout << "Encodded String is: ";
    for (char c : character)
    {
        cout << int(c + 1) << " ";
    }

    return character;
}

string dcryptString(const string &cipher)
{
    stringstream ss(cipher);
    string stringResult = "";

    int asciiValue;

    while (ss >> asciiValue)
    {
        stringResult += char(asciiValue);
    }

    return stringResult;
}

int main()
{

    string characterString;
    string cipherText;
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
    re_encrypt:
        encryptPassword(characterString);

        char Encrypt_Choice;

        cout << "\nDo you want to Encrypt more String (Y/N): ";
        cin >> Encrypt_Choice;
        
        if (Encrypt_Choice == 'Y' || Encrypt_Choice == 'y')
        {
            cin.ignore();
            goto re_encrypt;
        }
        else
        {
            return 0;
        }
    }
    else if (userChoice == 2)
    {
        cout << "You chose Dcryption!\n";
        cout << "Enter Cipher to Dcrypt: ";
        getline(cin, cipherText);
        cout << dcryptString(cipherText);
    }
    else
    {
        cout << "Invalid Choice";
    }
    return 0;
}