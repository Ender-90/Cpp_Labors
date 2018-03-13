#include <iostream>
#include <cmath>

using namespace std;

// Exercise no. 1
//
// Write a function, which calculate area of triangle.
// Input is given in centimeters. Output is given in square meters.

void triangleArea(){

    double b, h, area;

    cout<<"\n"<<"Welcome to the calculator of area of a triangle.\n";
    cout<<"Please input base of a triangle (in centimeters): ";
    cin>>b;
    cout<<"\n"<<"Please input height of a triangle (in centimeters): ";
    cin>>h;

    area = ((b * h) / 2) / 10000;

    cout<<"\n"<<"Area of the triangle is equal: "<<area<<" square meters.";

}

// Exercise no. 2
//
// Write a function, which calculate area of a circle
// and area of square on a given inscribed circle.

void circleSquareArea(){

    double r, a, circleArea, squareArea;

    cout<<"\n\n"<<"This is a calculator of area of a circle and ";
    cout<<"\n"<<"area of a square on a given inscribed circle."<<"\n";

    cout<<"Please input radius of a circle: ";
    cin>>r;
    circleArea = M_PI * r * r;
    a = 2 * r;
    squareArea = a * a;

    cout<<"\n\n"<<"Area of the circle is equal :"<<circleArea;
    cout<<"\n\n"<<"Area of the square is equal :"<<squareArea;

}

// Exercise no. 3
//
// Write a function, which ask for input seconds
// and convert to output in days, hours, minutes and seconds.

void convertSeconds(){

    int userInput, seconds, minutes, hours, days;

    cout<<"\n\n"<<"YO! I'm a seconds converter. Nice to meet you!";
    cout<<"\n"<<"Please give me a seconds! ";
    cin>>userInput;

    seconds = userInput;

    days = seconds / 86400;
    seconds %= 86400;

    hours = seconds / 3600;
    seconds %= 3600;

    minutes = seconds / 60;
    seconds %= 60;

    cout<<"\n"<<userInput<<" seconds = "<<days<<" days, "<<hours<< " hours, "<<minutes<<" minutes, "<<seconds<<" seconds.";

}
