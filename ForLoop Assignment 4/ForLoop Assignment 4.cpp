// ForLoop Assignment 4
// C++ program that outputs even numbers from 12 to 28

#include <iostream>
using namespace std;

int main() {

    int i;

    //For loop from 12 to 28.

    for (i = 12; i <=28; i++) {

        if (i % 2 == 0) { //Number should be divisible by 2.

            cout << i << " ";
        }
    }
    return 0;
}