#include <iostream>
#include <string>

using namespace std;

// Exercise no. 1
// Ask user for names and surname, then display them.

void userNameWelcome(){

    string  names, surname;

    cout<<"\n\n"<<"What's your names: ";
    cin>> names;
    cout<<"\n"<<"And your suname: ";
    cin<<surname;

    cout<<"\n"<<"Welcome to the jungle, "<<surname<<", "<<names<<"!";
}

