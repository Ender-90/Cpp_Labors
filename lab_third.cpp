#include <iostream>
#include <cstdlib>
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

// Exercise no. 3
//
// Write a micro database, which contains students and grades in the following subjects:
// Polish language, maths, Informatics and biology. At the beginning, the database system should
// ask the user for the number of students, then he should create an array of structures
// and ask for full details about subsequent students.
//
// At the end, the program should answer the questions about the grade in a given subject,
// giving the student's number and grade.

struct student {
    int id;
    string name;
    int polLangSub;
    int mathsSub;
    int inforSub;
    int biolSub;
};

void dataInput(student * dataBase, int numberOfStudents);

void studentClassSimulator(){

    int numberOfStudents;
    int menuOption;

    cout<<"\n\n"<<"Welcome in Class Micro Data Base ver. 0.0.1";
    cout<<"\n"<<"Please input number of students: "<<"\n";
    cin>>numberOfStudents;

    student * studentDatabase = new student[numberOfStudents];

    dataInput(studentDatabase, numberOfStudents);

    do{
        system("cls");

        cout<<"\n"<<"Menu:";
        cout<<"\n"<<"1. Ask for grades in given subject";
        cout<<"\n"<<"2. Quit"<<"\n";
        cin>>menuOption;

        switch(menuOption){

        case 1:
                do{
                    cout<<"\n\n"<<"Please select subject:";
                    cout<<"\n"<<"1. Polish language";
                    cout<<"\n"<<"2. Maths";
                    cout<<"\n"<<"3. Informatics";
                    cout<<"\n"<<"4. Biology";
                    cout<<"\n"<<"5. Back"<<"\n";

                    cin>>menuOption;

                    switch(menuOption){

                        case 1:
                            cout<<"\n"<<"Subject: Polish language";
                            for(int i = 0; i < numberOfStudents; i++){
                                cout<<"\n"<<"Student's ID: "<<studentDatabase[i].id;
                                cout<<"\n"<<"Student's name: "<<studentDatabase[i].name;
                                cout<<"\n"<<"Student's grade: "<<studentDatabase[i].polLangSub;
                                cout<<"\n";
                            }
                            break;
                        case 2:
                            cout<<"\n"<<"Subject: Maths";
                            for(int i = 0; i < numberOfStudents; i++){
                                cout<<"\n"<<"Student's ID: "<<studentDatabase[i].id;
                                cout<<"\n"<<"Student's name: "<<studentDatabase[i].name;
                                cout<<"\n"<<"Student's grade: "<<studentDatabase[i].mathsSub;
                                cout<<"\n";
                            }
                            break;
                        case 3:
                            cout<<"\n"<<"Subject: Informatics";
                            for(int i = 0; i < numberOfStudents; i++){
                                cout<<"\n"<<"Student's ID: "<<studentDatabase[i].id;
                                cout<<"\n"<<"Student's name: "<<studentDatabase[i].name;
                                cout<<"\n"<<"Student's grade: "<<studentDatabase[i].inforSub;
                                cout<<"\n";
                            }
                            break;
                        case 4:
                            cout<<"\n"<<"Subject: Biology";
                            for(int i = 0; i < numberOfStudents; i++){
                                cout<<"\n"<<"Student's ID: "<<studentDatabase[i].id;
                                cout<<"\n"<<"Student's name: "<<studentDatabase[i].name;
                                cout<<"\n"<<"Student's grade: "<<studentDatabase[i].biolSub;
                                cout<<"\n";
                            }
                            break;
                        default:
                            break;
                    }

                } while(menuOption !=5);
                break;
        default:
            break;

        }
    }while(menuOption !=2);

}

void dataInput(student * dataBase, int numberOfStudents){

    for(int i = 0; i < numberOfStudents; i++){

        dataBase[i].id = i;
        cin.sync();
        cout<<"\n"<<"What's the student's name: ";
        getline(cin,dataBase[i].name);
        cout<<"\n"<<"Please input grade in Polish language: ";
        cin>>dataBase[i].polLangSub;
        cout<<"Please input grade in maths: ";
        cin>>dataBase[i].mathsSub;
        cout<<"Please input grade in informatics: ";
        cin>>dataBase[i].inforSub;
        cout<<"Please input grade in biology: ";
        cin>>dataBase[i].biolSub;
        cout<<"\n";

    }

}
