#include <iostream> 
#include <string>
#include <format>
using namespace std;

int main() {
	char op;
	float num1, num2;
	cout << "Enter 2 numbers: ";
	cin >> num1 >> num2;
	cout << "Enter operator: ";
	cin >> op;

	switch (op) {
		case '+':
			cout << format("{} + {} = {}", num1, num2, num1 + num2);
			break;

		case '-':
			cout << format("{} - {} = {}", num1, num2, num1 - num2);
			break;

		case 'x':
		case '*':
			cout << format("{} * {} = {}", num1, num2, num1 * num2);
			break;

		case '/':
			cout << format("{} / {} = {}", num1, num2, num1 / num2);
			break;

		default:
			cout << "Error, incorrect input";
			break;
	}
	return 0;
}