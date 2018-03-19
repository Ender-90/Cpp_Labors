#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Exercise no. 3
//
// Find and return max element of integer array.

int maxInArray(int * arr, int length);
void generateIntArray(int * &arr, int &length);
void displayIntArray(int * arr, int length);

void findingMaxInArray(){

    int length;
    int * arr;

    cout<<"\n\n"<<"Finding Max Element:"<<"\n\n";

    generateIntArray(arr, length);
    displayIntArray(arr, length);

    cout<<"\n"<<"Max element is equal to "<<maxInArray(arr, length);

    delete [] arr;
    arr = 0;
}

int maxInArray(int * arr, int length){
    int result = arr[0];

    for(int i = 1; i < length; i++){
        if(arr[i] > result){
            result = arr[i];
        }
    }

    return result;
}

void generateIntArray(int * &arr, int &length){

    cout<<"\n"<<"Specify length of int array: ";
    cin>>length;

    arr = new int[length];
    srand(time(NULL));

    for(int i = 0; i < length; i++){
        arr[i] = rand() % 50;
    }
}

void displayIntArray(int * arr, int length){

    cout<<"\n"<<"Array: "<<"\n";

    for(int i = 0; i < length; i++){
        cout<<arr[i]<<" ";
    }

}
