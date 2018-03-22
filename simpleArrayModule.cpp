#include <string>
#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

//////////////////////
//                  //
//  Integer arrays. //
//                  //
//////////////////////

void createIntArray(int * &intArray, int &length){

    cout<<"\n"<<"Please specify size of array: ";
    cin>>length;

    if(length < 1){
        do{
            cout<<"Length has to be positive number.\nPlease input again: ";
            cin>>length;
        }while(length < 1);
    }

    intArray = new int[length];

}

// Function for generation has three options:
// - with default option - range 0 - 100
// - with specified maximum value - start value 0
// - with specified both minimum and maximum values

void generateIntArray(int * &intArray, int length){

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 randomEngine(seed);
    uniform_int_distribution<int> unifInt(0, 100);

    for(int i = 0; i < length; i++){
        intArray[i] = unifInt(randomEngine);
    }
}

void generateIntArray(int * &intArray, int length, int &maxValue){

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 randomEngine(seed);

    if(maxValue < 1){
        do{
            cout<<"Maximum value of generated number should be more than 0: ";
            cin>>maxValue;
            while(!cin){
                cin.clear();
                cin.ignore();
                cout<<"Wrong input. Please try again: ";
                cin>>maxValue;
            }
        }while(maxValue < 1);
    }

    uniform_int_distribution<int> unifInt(0, maxValue);

    for(int i = 0; i < length; i++){
        intArray[i] = (rand() % range);
    }
}

void generateIntArray(int * &intArray, int length, int &minValue, int &maxValue){

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 randomEngine(seed);

    if(maxValue <= minValue){
        do{
            cout<<"Maximum value should be greater than minimum.\nPlease input minimum value: ";
            cin>>minValue;
            while(!cin){
                cin.clear();
                cin.ignore();
                cout<<"Wrong input. Please try again: ";
                cin>>minValue;
            }
            cout<<"Please input maximum value: ";
            cin>>maxValue;
            while(!cin){
                cin.clear();
                cin.ignore();
                cout<<"Wrong input. Please try again: ";
                cin>>maxValue;
            }
        }while(maxValue <=minValue);

    uniform_int_distribution<int> unifInt(minValue, maxValue);

    for(int i = 0; i < length; i++){
        intArray[i] = (rand() % range) + startValue;
    }
}

void inputIntArray(int * &intArray, int length, string welcomeMessage){

    cout<<"\n"<<welcomeMessage<<"\n";

    for(int i = 0; i < length; i++){
        cout<<"Please input next value: ";
        cin>>intArray[i];
    }
}

void displayIntArray((int * intArray, int length, string arrayTitle){

    cout<<"\n"<<"  "<<arrayTitle<<"\n";

    for(int i = 0; i < length; i++){
        cout<<intArray[i]<<" ";
    }

}

//////////////////////
//                  //
//  Double arrays.  //
//                  //
//////////////////////

