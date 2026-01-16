//
// Created by Ryan Fitzgerald on 3/11/25.
//
#include <iostream>
#include <ostream>
#include <stdio.h>
#include "chapters.h"

using namespace std;
void chapter_04() {
    printf("Chapter 4, Errors!\n");
    printf("I realized that from now on a large part of my life would be spent finding and correcting my own mistakes. -Maurice Wilkes, 1949\n\n");

    // 4.3 compile-time errors, syntax and type errors

    /*
        int s1 = area(7,2;
        int s2 = area(7,2)
        Int s3 = area(7,2);
        int s4 = area('7,2);

        .../src/chapter_04.cpp:12:22: error: expected ')'
        12 |     int s1 = area(7,2;
        |                      ^
        .../src/chapter_04.cpp:12:18: note: to match this '('
        12 |     int s1 = area(7,2;
        |                  ^
        .../src/chapter_04.cpp:13:14: error: use of undeclared identifier 'area'
        13 |     int s2 = area(7,2)
        |              ^
        .../src/chapter_04.cpp:13:23: error: expected ';' at end of declaration
        13 |     int s2 = area(7,2)

    */

    // 4.4 Link-time errors

    // test if we capture this error properly
    int x;
    cout << "Input a negative number to quit:" << endl;
    cin >> x;
    if (x <= 0)
        error("non-positive argument");


    // 4.5 Run-time errors - caller, callee, reporting

    // 4.6 Exceptions - bad arguments, range errors, bad inputs

    // 4.7 Avoiding and finding errors - estimation, debugging, assertions, testing, random numbers






}