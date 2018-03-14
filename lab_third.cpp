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

    cout<<"\n"<<"Brand: "<<bar.brand<<"\n"<<"Weight: "<<bar.weight<<"g"<<"\n"<<"Calories: "<<bar.calories<<"kcal"<<"\n";
}

// Exercise no. 2
//
// William Wingate is Pizza Analitics. For every pizza he saves the following information:
// - brand name (can be more than one word)
// - diameter of pizza
// - weight of pizza
// Help him in his work and write an app, which ask for all data and display it.

struct pizza {
    string brandName;
    int diameter;
    double weight;
};

void pizzaAnalitics(){

    pizza newPizza;

    cout<<"\n\n"<<"Welcome user! This is Pizza Analyzer. Help us in build better pizza world!";

    cout<<"\n\n"<<"Please input name of pizza: ";
    getline(cin, newPizza.brandName);

    cout<<"\n"<<"Please input diameter of pizza: ";
    cin>>newPizza.diameter;

    cout<<"\n"<<"Please input weight of pizza: ";
    cin>>newPizza.weight;

    cout<<"\n"<<"Brand: "<<newPizza.brandName<<"\n"<<"Diameter: "<<newPizza.diameter<<"cm"<<"\n"<<"Weight: "<<newPizza.weight<<"g"<<"\n";

}
