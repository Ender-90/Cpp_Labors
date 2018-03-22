//  Simple Array Module
//
// Module for create, generate and display arrays
//

#pragma once

#include <string>

// Integer arrays.

void createIntArray(int * &intArray, int &length);
void generateIntArray(int * &intArray, int length);
void generateIntArray(int * &intArray, int length, int maxValue);
void generateIntArray(int * &intArray, int length, int minValue, int maxValue);
void inputIntArray(int * &intArray, int length, string welcomeMessage);
void displayIntArray((int * &intArray, int length, string arrayTitle);

// Double arrays.

void createDoubleArray(double * &doubleArray, int &length);
void generateDoubleArray(double * &doubleArray, int length);
void generateDoubleArray(double * &doubleArray, int length, double maxValue);
void generateDoubleArray(double * &doubleArray, int length, double minValue, double maxValue);
void inputDoubleArray(double * &doubleArray, int length, string welcomeMessage);
void displayDoubleArray(double * &doubleArray, int length, string arrayTitle);
