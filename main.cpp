#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main ()
{

    int choice;
    double num1;
    double num2;
    do {
        cout << " Welcome to the VS calculator!" << endl;
        cout << "Enter a digit corresponding to the operation" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Power" << endl;
        cout << "7. Exit Code" << endl;
        cin >> choice;
    double result = 1;


    cout << "Please enter the two numbers with space between" << endl;

    switch (choice) {

        case 1: cout << "Addition" << endl;
            cout << "Enter your desired numbers" << endl;
            cin >> num1 >> num2;
            result = num1 + num2;
            break;

        case 2: cout << "Subtraction";
            cout << "Enter your desired numbers" << endl;
            cin >> num1 >> num2;
            result = num1 - num2;
            break;

        case 3: cout << "Multiplication";
            cout << "Enter your desired numbers" << endl;
            cin >> num1 >> num2;
            result = num1 * num2;
            break;

        case 4: cout << "Division";
            cout << "Enter your desired numbers" << endl;
            cin >> num1 >> num2;
            result = num1 /num2;
            break;

        case 5: cout << "Modulo";
            cout << "Enter your desired numbers" << endl;
            cin >> num1 >> num2;
            result = static_cast<int>(num1) % static_cast<int>(num2);
            break;

        case 6: cout << "Power" << endl;
            cout << "Enter your desired numbers" << endl;
            cin >> num1 >> num2;
            for (int count = 0; count < num2; count++) {
                result *= num1;
            }
            break;

        default: cout << "Exiting Program";
            break;
    }
    cout << "Your answer is..." << result << endl;
}   while (true);




}
