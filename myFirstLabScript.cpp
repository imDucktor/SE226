#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    // #1
    string name;
    cout << "What is your name? \n";
    getline(cin, name);
    cout << "Hello " << name << " \n";
    
    int id;
    cout << "What is your Student ID? \n";
    cin >> id;
    cout << "Your ID is " << id << ".\n";

    // #2
    int var1, var2;
    cout << "Enter a variable= \n";
    cin >> var1;
    cout << "Enter a variable= \n";
    cin >> var2;
    
    int sum = var1 + var2;
    int diff = abs(var1 - var2);
    int prod = var1 * var2;
    
    cout << "Variables: " << var1 << " - " << var2 << "\n";
    cout << "Sum = " << sum << "\n";
    cout << "Diff = " << diff << "\n";
    cout << "Prod = " << prod << "\n";

    // #3
    cout << "What is your name? \n";
    cin.ignore();
    getline(cin, name);
    
    float lab, midterm, final;
    cout << "What is your lab grade? \n";
    cin >> lab;
    cout << "Enter a midterm grade= \n";
    cin >> midterm;
    cout << "What is your final grade? \n";
    cin >> final;
    
    float score = lab * (25.0 / 100.0) + midterm * (35.0 / 100.0) + final * (40.0 / 100.0);
    
    cout << "Name: " << name << "\n";
    cout << "Lab: " << lab << "\n";
    cout << "Midterm: " << midterm << "\n";
    cout << "Final: " << final << "\n";
    cout << "Last Score: " << score << "\n";

    // #4
    cout << "*\n**\n***\n**\n*\n";

    return 0;
}

