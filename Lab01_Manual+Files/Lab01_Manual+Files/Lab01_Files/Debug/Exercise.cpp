#include <iostream>
using namespace std;
void calculator(char, float, float);

int main()
{
    calculator('*', 5, 6);
    calculator('/', 25, 5);
    calculator('+', 100, 6);
    calculator('-', 15, 3);
}
void calculator(char o, float num1, float num2)
{

    float result;

    switch (o)
    {
    case '+':
        result = num1 + num2;
        num1 = num1 * 10;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break; // insert a breakpoint here
    case '-':
        result = num1 + num2;
        num2 = num2 + 10;
        cout << num1 << " - " << num2 << " = " << result << endl;

        break; // insert a breakpoint here
    case '*':
        result = num1 * num2;
        num1 = num1 - 10;
        cout << num1 << " * " << num2 << " = " << result << endl;

        break; // insert a breakpoint here
    case '/':
        result = num1 / num2;
        num2 = num2 - 10;
        cout << num1 << " / " << num2 << " = " << result << endl;

        break; // insert a breakpoint here
    default:
        cout << "Error! operator is not correct";
        break;
    }
}
