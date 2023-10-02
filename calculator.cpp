#include<iostream>
using namespace std;

int main()
{
    char retry = 'y';

    while (retry == 'y')
    {
        int num1, num2, result = 0;
        char op;
        char descion = 'y';

        cout << "Please enter two numbers and an operator: ";
        cin >> num1 >> op >> num2; // Read num1, num2, and op separately

        switch (op)
        {
        case '*':
        {
            result = num1 * num2;
            break;
        }
        case '+':
        {
            result = num1 + num2;
            break;
        }
        case '-':
        {
            result = num1 - num2;
            break;
        }
        case '/':
        {
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                cout << "INVALID STATEMENT! Division by zero is not allowed." << endl;
                continue;
            }
            break;
        }
        default:
        {
            cout << "We only accept '+', '-', '*', and '/' for now." << endl;
            continue;
        }
        }

        cout << "Result: " << result << "\nDo you want to continue (y/n): ";
        cin >> descion;

        while (descion == 'y')
        {
            char op2 = 0;
            int num3;

            cout << result << " ('+', '-', '*', '/') Next Operator and Number: ";
            cin >> op2 >> num3;

            switch (op2)
            {
            case '*':
            {
                result = result * num3;
                break;
            }
            case '+':
            {
                result = result + num3;
                break;
            }
            case '-':
            {
                result = result - num3;
                break;
            }
            case '/':
            {
                if (num3 != 0)
                {
                    result = result / num3;
                }
                else
                {
                    cout << "INVALID STATEMENT! Division by zero is not allowed." << endl;
                    continue;
                }
                break;
            }
            default:
            {
                cout << "We only accept '+', '-', '*', and '/' for now." << endl;
                continue;
            }
            }

            cout << "Result: " << result << "\nDo you want to continue (y/n): ";
            cin >> descion;
        }

        cout << "Retry with new numbers and operator? (y/n): ";
        cin >> retry;
    }

    return 0;
}
