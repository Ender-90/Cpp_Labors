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
    cin>>surname;

    cout<<"\n"<<"Welcome to the jungle, "<<surname<<", "<<names<<"!";
}

// Exercise no. 2
//
// Get three sprint times from user,
// then compute average of times and display it.

void averageOfSprints(){

    int sprintTimes [3] = {0};
    int average = 0;

    cout<<"\n\n"<<"This app compute average from three sprint times";

    cout<<"\n"<<"Please give time of first sprint: ";
    cin>>sprintTimes[0];

    cout<<"\n"<<"Please give time of second sprint: ";
    cin>>sprintTimes[1];

    cout<<"\n"<<"Please give time of third sprint: ";
    cin>>sprintTimes[2];

    for(int i = 0; i <3; i++){
        average += sprintTimes[i];
    }

    average /= 3;

    cout<<"\n"<<"First sprint: "<<sprintTimes[0];
    cout<<"\n"<<"Second sprint: "<<sprintTimes[1];
    cout<<"\n"<<"Third sprint: "<<sprintTimes[2];
    cout<<"\n"<<"Average of sprint times: "<<average;
}

// Exercise no. 3
//
// Get two integer numbers from user,
// then calculate the sum of numbers between them.

void sumBetween(){

    int first, last, sum;

    cout<<"\n\n"<<"Give two numbers and get sum of numbers between.";

    cout<<"\n"<<"Please input first number in range: ";
    cin>>first;

    cout<<"\n"<<"Please input last number in range: ";
    cin>>last;

    sum = 0;

    for(int i = first; i <= last; i++){
        sum += i;
    }

    cout<<"\n"<<"Sum of numbers in range ("<<first<<","<<last<<"): "<<sum<<".";
}
