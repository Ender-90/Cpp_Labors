#include <iostream>
#include <string>
#include <cmath>

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

// Exercise no. 4
//
// Dafne invests 100 dollars with interest rate of 10% without capitalization.
// Cleo invests 100 dollars with interest rate of 5% with capitalization.
// Write an app, which check when Cleo will have more dollars than Dafne,
// then show years of invest with actual invest balance.

void investCheck(){
    double dafneBalance = 100, cleoBalance = 100;
    int years = 0;

    cout<<"\n\n";

    do {

        dafneBalance += (100*0.1);
        cleoBalance += (cleoBalance*0.05);
        years++;
        cout<<"\n"<<"After "<<years<<" years Cleo has "<<(round(cleoBalance*100))/100<<" dollars and Dafne has "<<(round(dafneBalance*100))/100<<" dollars.";

    }while(cleoBalance <= dafneBalance);

    cout<<"\n\n"<<"After "<<years<<" years Cleo has "<<(round(cleoBalance*100))/100<<" dollars and Dafne has "<<(round(dafneBalance*100))/100<<" dollars.";
    cout<<"\n"<<"Cleo has "<<(round((cleoBalance - dafneBalance)*100))/100<<" dollars more than Dafne.";
}

// Exercise no. 5
//
// Ask user for number of rows to display.
// Then display rows with the right number of stars (first row - one star, second row - two stars,...)

void starDisplay(){

    int rowNumber;
    cout<<"\n\n"<<"Welcome to the SIRD - 'Stars In Rows Display!'"<<"\n"<<"Please input number of rows to display: ";
    cin>>rowNumber;

    cout<<"\n";

    for(int i = 0; i < rowNumber; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    cout<<"\n"<<"Nice stars, don't you think?";
}

// Exercise no. 6
//
// Write an tax calculate app for NaturLand kingdom, where have currency named Twarp.
// They have following tax thresholds:
// first 5 000 twarps - 0%;
// next 10 000 twarps - 10%;
// next 20 000 twarps - 15%;
// rest above 35 000 twarps - 20%;

int secondThresh(int * calculateTmp);
int thirdThresh(int * calculateTmp);
int fourthThresh(int * calculateTmp);

void taxForNaturLand(){

    int taxpayerTwarps, tax;
    int *calculateTmp;

    cout<<"\n\n"<<"Hello, dear taxpayer! Welcome to NaturLand Tax Calculator.";
    cout<<"\n"<<"Please prepare following documents: PIT-11, PIT-16, PIT-37, PIT-63, PIT-89, (...), PIT-897, PIT-965, (...),";
    cout<<"\n"<<"PIT-92873, PIT-104938,(...), and of course, do not forget about VAT-3,VAT-7,VAT-24, (...), VAT-342)(...)";
    cout<<"\n\n"<<"(After 4 596 rows of documents...)";

    cout<<"\n\n"<<"Please input your twarp income for last year: ";
    cin>>taxpayerTwarps;

    *calculateTmp = taxpayerTwarps;

    if (taxpayerTwarps < 0){

        cout<<"What da hell is it? You cheat! An invisible battalion of investigation gnomes has been sent to you!";
        exit(1);
    }

    if(taxpayerTwarps <= 5000){

        tax = 0;

    } else if (taxpayerTwarps <= 15000){

        tax = secondThresh(calculateTmp);

    } else if (taxpayerTwarps <= 35000){

        tax = thirdThresh(calculateTmp);

    } else {

        tax = fourthThresh(calculateTmp);

    }

    cout<<"\n\n"<<"The tax you have to pay is: "<<tax<<" twarps + "<<(tax*0.24)<<" twarps for administrative fees.";
    cout<<"\n"<<"Have a nice day!"<<"\n"<<"wishes from"<<"\n"<<"The Tax Collector Team of NaturLand"<<"\n";

}

int secondThresh(int * calculateTmp){

    *calculateTmp -= 5000;

    return *calculateTmp * 0.1;

}
int thirdThresh(int * calculateTmp){

    int tmpTax = 0;
    tmpTax = secondThresh(calculateTmp);

    *calculateTmp -= 10000;

    return tmpTax + (*calculateTmp * 0.15);

}
int fourthThresh(int * calculateTmp){

    int tmpTax = 0;
    tmpTax = thirdThresh(calculateTmp);

    *calculateTmp -= 20000;

    return tmpTax + (*calculateTmp * 0.2);

}
