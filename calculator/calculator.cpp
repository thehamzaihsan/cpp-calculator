
#include <iostream>
using namespace std;


int main()
{
	//declaring variables
	char operation;
	int a, b;

	//taking input the values a and b
	cout << "Input the values\n";
	cout << "Input first value:";
	cin >> a;
	cout << "Input second value:";
	cin >> b;

	//Outputing the options related to the calculator
	cout << "Input the operation:\n";
	cout << "1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.Reminder\n";
	//Taking input of which operation to do
	cin >> operation;

	//switch statement
	switch (operation)
	{
	case '1':
	case '+':
		cout << "Answer is:" << a + b;
		break;
	case '2':
	case '-':
		cout << "Answer is:" << a - b;
		break;
	case '3':
	case '*':
		cout << "Answer is:" << a * b;
		break;
	case '4':
	case '/':
		cout << "Answer is:" << a / b;
		break;
	case '5':
	case '%':
		cout << "Answer is:" << a % b;
		break;
	default:
		cout << "!!wrong input!!!";
		break;
	}
}

