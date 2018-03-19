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

// Exercise no. 2
//
// Write an application with three functions:
// - fill_array() - user give double precision numbers
// - show_array()
// - reverse_array()

void fill_array(double * &arr, int &length);
void show_array(double * arr, int length);
void reverse_array(double * arr, int length);

void arrayFun(){

    int length;
    double * arr;

    cout<<"Welcome in Array inverter!";

    fill_array(arr, length);
    show_array(arr, length);
    reverse_array(arr, length);
    show_array(arr, length);

    delete [] arr;
    arr = 0;
}

void fill_array(double * &arr, int &length){

    cout<<"\n"<<"Please specify size of array: ";
    cin>>length;

    if(length < 1){
        do{
            cout<<"Length has to be positive number.\nPlease input again: ";
            cin>>length;
        }while(length < 1);
    }

    arr = new double[length];

    for(int i = 0; i < length; i++){
        cout<<"\n"<<"Input "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cout<<"\n"<<"Array has been filled.";
}

void show_array(double * arr, int length){

    cout<<"\n"<<"Array:\n";

    for(int i =0; i < length; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse_array(double * arr, int length){

    double tmp;

    for(int i = 0; i < (length/2); i++){

        tmp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = tmp;
    }

}
