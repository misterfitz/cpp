//
// Created by Ryan Fitzgerald on 3/1/25.
//

#include <cstdio>
#include <iostream>
#include <ostream>

using namespace std;

int square(int x) {
    return x * x;
}

void chapter_03() {
    printf("Chapter 03\n");

    cout << "Do you like fish?\n";
    char c;
    cin >> c;

    switch (c) {
        case 'y': cout << "Yes" << endl; break;
        case 'n': cout << "No" << endl; break;

    }

    int i = 0;
    while (i < 26) {
        cout << char('a' + i) << "\t" << i << "\t" << square(i) << endl;
        i++;
    }

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;

    }

    vector<string> philosopher = { "kant", "Plato", "Hume", "Kierkegaard"};
    for (auto it = philosopher.begin(); it != philosopher.end(); it++) {
        cout << *it << endl;
    }

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);;


}
