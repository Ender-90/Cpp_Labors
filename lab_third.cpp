#include <iostream>
#include <cstdlib>
#include <ctime>
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

// Exercise no. 4
//
// Simple guess game. User have to guess a number generate by computer.

string randomYodaQuote();

void guessYodaGame(){

    int smallestInRange, largestInRange, guess, mysteryNumber;

    cout<<"\n\n"<<"Younglings, younglings gather 'round.";
    cout<<"\n"<<"Young padawan, do you play a game with me want to, hmm?";
    cout<<"\n"<<"Good luck and may the Force be with you!";

    cout<<"\n\n"<<"First, think about the smallest number...  : ";
    cin>>smallestInRange;
    cout<<"\n"<<"... and about the largest... : ";
    cin>>largestInRange;

    srand(time(NULL));
    mysteryNumber = (rand() % (largestInRange - smallestInRange)) + smallestInRange;

    cout<<"\n"<<"Ready, I am ready.  To guess the number I think about use the Force.  Yeesssssss.";

    cout<<"\n\n"<<"So your answer, what is, hmm?  : ";
    cin>>guess;

    while(guess != mysteryNumber){
        if(guess > largestInRange || guess < smallestInRange){
            cout<<"You will find only what you bring in.";
          } else if(guess > mysteryNumber){
                cout<<"\n"<<randomYodaQuote();
                cout<<"\n"<<"Too much! :";
          } else {
                cout<<"\n"<<randomYodaQuote();
                cout<<"\n"<<"Too less! :";
          }
          cin>>guess;

    }

    cout<<"\n\n"<<"Truly wonderful the mind of a child is.";
    cout<<"\n"<<"May the Force be with you."<<"\n\n";
}

string randomYodaQuote(){

    string quotes []  = {
    "Train yourself to let go of everything you fear to lose.",
    "Fear is the path to the dark side. Fear leads to anger. Anger leads to hate. Hate leads to suffering.",
    "You can't believe it. That is why you fail.",
    "PATIENCE YOU MUST HAVE my young padawan.",
    "Feel the force!",
    "You must unlearn what you have learned.",
    "In a dark place we find ourselves, and a little more knowledge lights our way.",
    "Many of the truths that we cling to depend on our point of view.",
    "The fear of loss is a path to the Dark Side.",
    "Do or do not. There is no try.",
    "Difficult to see. Always in motion is the future..",
    "Looking? Found someone you have, eh?",
    "Not if anything to say about it I have!",
    "Your weapons, you will not need them.",
    "If no mistake have you made, yet losing you are ... a different game you should play.",
    "Mine, or I will help you not!",
    "Who's your Jedi master? WHO'S your Jedi Master?",
    "Control, control, you must learn control!"
    };

    return quotes[rand() % 18];

}
