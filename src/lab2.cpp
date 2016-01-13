#include "eecs230.h"

//
// Lab 2 programs
//

int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    return 0;
}

int main() {
    illegalStatements();
    cout << "Enter test value: \n";
    double testvalue;
    cin >> testvalue;
    if (cin.fail()) {
     cout << "Error: Input integer value\n";
    }
    else {
        double x;
        x=testvalue/2;
        if (x==ceil(x)){
            cout << "The value of " << testvalue << " is an even number\n";}
        else {
            cout << "The value of " << testvalue << " is an odd number\n";
        }
    }

    cout << "Enter operation and two operands: \n";
    string operation;
    double operand1;
    double operand2;
    cin >> operation;
    cin >> operand1;
    cin >> operand2;
    double solution;
    if (operation=="+") {
        solution=operand1+operand2;
    }
    if (operation=="-") {
        solution=operand1-operand2;
    }
    if (operation=="*") {
        solution=operand1*operand2;
    }
    if (operation=="/") {
        solution=operand1/operand2;
    }
    cout << solution;


}

