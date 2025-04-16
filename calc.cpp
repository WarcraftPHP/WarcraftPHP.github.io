#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

    void showHelp() {
        cout << "'add' - adds two numbers when asking for operation" << endl;
        cout << "'subtract' subtracts two numbers when asking for operation" << endl;
        cout << "'multiply' to multiple two numbers" << endl;
        cout << "'divide' to divide two numbers" << endl;
        cout << "'compare' to compare two numbers" << endl; // made by WarcraftPHP
    }
int main() {
    string operation;
    string help;
    float x;
    float y;
while (true){
    cout << "use '/help' to get cmds" << endl;
   cout << "Write first number: " << endl;
   cin >> x;
   cout << "Write second number: " << endl;
   cin >> y;
if (cin.fail()){
 cin.clear(); 
cout << "Invalid input" << endl;
}
   cout << "Choose arithmethic action: ";
cin >> operation;
if (operation == "add"){
    cout << "Addition = " << x+y << endl;
}
else if (operation == "multiply"){
    cout << "Multiplication = " << x*y << endl;
}
else if (operation == "divide"){
    if ( y == 0 ) {
        cout << "You can't divide by zero" << endl;
    }
    else {
    cout << "Division = " << x / y << endl;
    }
}
else if (operation == "subtract"){
    cout << "Subtraction = " << x-y << endl;
}
else {
    cout << "Invalid operation" << endl;
}
 if ( operation == "/help" ) {
    showHelp();
}
else if (operation == "compare"){
    if (x < y){
        cout << y << " is greater than " << x << endl;
    }
    else if (x > y){
        cout << x << " is greater than " << y << endl; 
        return 0;
}
}
}
}