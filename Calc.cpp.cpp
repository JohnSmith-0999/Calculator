#include<iostream>
using namespace std;
float num1;
float num2;
float result;
void multiplication() {
	result = num1 * num2;
}
void addition() {
	result = num1 + num2;
}
void division() {
	if (num2 == 0) {
		std::cout << "result is Void, as division by zero is not permitted here" << endl;
	}
	else{
		result = num1 / num2;
	}	
}
void subtraction() {
	result = num1 - num2;
}
int main()
{
	int choice;
	std::cout << "enter a number" << endl;
	cin >> num1;
	std::cout << "enter another number" << endl;
	cin >> num2;
	std::cout << "What would you like to do?" << endl;
	std::cout << "1. Addition 2. Subtraction 3. Muliplication 4. Division " << endl;
	cin >> choice;
	switch(choice) {
case 1 :
	{
	addition();
	std::cout << "Your result : " << result << endl;
	break;
	}

case 2 :
	{
	subtraction();
	std::cout << "Your result : " << result << endl;
	break;
	}
case 3 :
	{
	multiplication();
	std::cout << "Your result : " << result << endl;
	break;
	}
case 4 :
	{
	division();
	std::cout << "Your result : " << result << endl;
	break;
	}
	}
	return 0;
}	
