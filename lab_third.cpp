#include <iostream>
#include <string>

using namespace std;

// Exercise no. 1
//
// Implement structure "Candy Bar" with three fields: brand, weight and calories.
// Declare variable snack  („Mocha Munch”, 2.3 , 350) and display it.
// Declare CandyBar variable with any values and display it.

struct candyBar {
    string brand;
    double weight;
    int calories;
    };

void displayCandyBar(candyBar bar);

void playWithCandyBars(){

    candyBar snack = { "Mocha Munch", 2.3, 350 };
    displayCandyBar(snack);

    candyBar knoppers = { "Knoppers", 25, 138 };
    displayCandyBar(knoppers);

}

void displayCandyBar(candyBar bar){

    cout<<"\n"<<"Brand: "<<bar.brand<<"\n"<<"Weight: "<<bar.weight<<"\n"<<"Calories: "<<bar.calories<<"\n";
}
