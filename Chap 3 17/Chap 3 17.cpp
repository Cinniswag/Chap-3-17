// 3 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int guess;
    double inputa = rand();
    double inputb = rand();
    cout << inputa << " + " << inputb << " = ?" << endl;
    cin >> guess;
    double outputc = inputa + inputb;
    
    if (guess == outputc)
        cout << "correct! it is indeed " << guess << endl;
    else
        cout << "incorrect! it is actually " << outputc << endl;

}