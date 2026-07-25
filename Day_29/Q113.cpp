#include<iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    do
    {
        cout << "\n====== Menu Driven Calculator ======\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;

                if(num2 != 0)
                {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                else
                {
                    cout << "Division by zero is not allowed!" << endl;
                }
                break;

            case 5:
            {
                int a, b;

                cout << "Enter two integers: ";
                cin >> a >> b;

                if(b != 0)
                {
                    cout << "Result = " << a % b << endl;
                }
                else
                {
                    cout << "Modulus by zero is not allowed!" << endl;
                }
                break;
            }

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}