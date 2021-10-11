# include <iostream>
# include <conio.h>
using namespace std;

int main() {

    //Data
    char op;
    float no1, no2;

    //Entry

    cout<< "--------------"<<endl;
    cout<< "Basic Operator"<< endl;
    cout<< "--------------"<<endl;

    //Input

	cout << "Enter any two number: ";
    cin >> no1 >> no2;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    //Operator

    switch(op) {
        case '+':
            cout << "The calculated result is : " << no1 + no2;
            break;

        case '-':
            cout << "The calculated result is : " << no1 - no2;
            break;

        case '*':
            cout << "The calculated result is : " << no1 * no2;
            break;

        case '/':
            cout << "The calculated result is : " << no1 / no2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    getch();
}
