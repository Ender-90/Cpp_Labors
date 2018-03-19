#include <iostream>
#include <cstdlib>

using namespace std;

// Exercise no. 1
//
// Get from user two numbers until input will be equal to 0.
// Calculate the harmonic mean for each pair of numbers.
// Calculating function should return it's value to other function,
// where should be display.

double inputNumber();
double calculateHarmonic(double firstNumber, double secondNumber);
void quitDisplayHarmonicMean();

void displayHarmonicMean(){

    double firstNumber, secondNumber;
    double result;

    cout<<"\n\n"<<"Welcome to the Harmonic Calculator.";
    cout<<"\n"<<"For each pair of positive integers harmonic mean will be calculated.";
    cout<<"\n"<<"If input will be equal to 0, app will be stopped.";

    do{
        firstNumber = inputNumber();
        secondNumber = inputNumber();
        result = calculateHarmonic(firstNumber, secondNumber);

        cout<<"\n"<<"Calculated harmonic mean of "<<firstNumber<<" and "<<secondNumber<<" is equal to: "<<result;
    }while(1);

}

double inputNumber(){
    double input;

    cout<<"\n"<<"Please input number: ";
    cin>>input;

    if(input == 0){
        quitDisplayHarmonicMean();
    } else if(input < 0){
        do {
            cout<<"Input should be positive integer: ";
            cin>>input;
            if(input == 0){
                quitDisplayHarmonicMean();
            }
        }while(input < 0);
    }

    return input;
}

double calculateHarmonic(double firstNumber, double secondNumber){

    return 2 / ((1/firstNumber) + (1/secondNumber));

}

void quitDisplayHarmonicMean(){

    cout<<"Input is equal to 0. App has been stopped.";
    exit(0);

}
