//
//  main.cpp
//  mathTutor1
//
//  Created by Tordenzil Toussaint on 2/13/20.
//  Copyright © 2020 Tordenzil Toussaint. All rights reserved.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {
    
    // Description about the project and its creator
    cout << "\t\t\t\tDescription: This program can be used as a math tutor for a young student" << endl;
    cout << "\t\t\t\tLAB: Math Tutor " << endl;
    cout << "\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\tProgrammer: Tordenzil T" << endl;
    cout << "\t\t\t\tLast Modified Date: 02/14/2020" << endl;
    cout << endl;
    
    // Constants
    const int MIN_VALUE = 1; // Min value
    const int MAX_VALUE = 99; // Max value
     
    unsigned seed = time(0);  // Get the system time
    
    // Seed the random generator
    srand(seed);
    
    // Variable to hold the number.
    int num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)),
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1));

    // the total value of number 1 and number 2
    int total = num1 + num2;
    
    cout << "\t\tSolve the addition of the two numbers." << endl;
    cout << endl;
    
    cout << "\t\t   " << num1 << endl;
    cout << "\t\t + " << num2 <<endl;
    cout << "\t\t-------"<< endl;
    cout << endl;
    
    cout << "\t\tPress Enter to check your answer.";
    cin.get(); // this will pause the system because On MAC OSX system("pause") does not work.
    cout << endl;
    cout <<"\t\tThe correct answer is " << total << "." << endl; // This will show the result

    return 0;
}
