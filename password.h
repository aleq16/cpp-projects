#pragma once
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class password
{
private:
    char password[20], my_password[20] = "1601"; //this is the password, it can be changed if we change the text inbetween the "".
    int i;
    char ch;
public:
    void verify_password();
};
void password::verify_password() {
    system("cls");
    cout << "Please enter the password to continue: ";
    i = 0;
    do
    {
        ch = _getch();
        password[i] = ch;
        if (ch != 27 && ch != 13)
            _putch('*');
        else
            break;
        i++;
    } while (i < 19);
    password[i] = '\0';

    // verify password
    if (strcmp(password, my_password) != 0)
    {

        cout << "\n\nTry again!";
        _getch();
        verify_password(); // if the password is incorrect it will recall the function untill you enter the right password
    }
    cout << "\n\nYou're in!\n";
    _getch();

}