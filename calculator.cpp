#include<iostream>
using namespace std;
int main()
{
	char op;
	float value1,value2;
	cout<<"enter the number 1: ";
	cin>>value1;
	cout<<"enter the number 2: ";
	cin>>value2;
	cout<<"Enter operator: "<<op;
	cin>>op;
	switch(op)
	{
		case '+':
		cout<<"Result: "<<value1 + value2;
		break;
		case '-':
		cout<<"Result: "<<value1 - value2;
		break;
		case '*':
		cout<<"Result: "<<value1 * value2;
		break;
		case '/':
		if(value2 != 0)
                cout << "Result = " <<value1 / value2;
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Invalid operator!";
}
}
