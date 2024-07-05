#include <iostream>

int main()
{
	using namespace std;
	int Numbers[10];
	int Sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Type number " << (i + 1) << " : ";
		cin >> Numbers[i];
		Sum += Numbers[i];
	}

	cout << "The sum of the 10 numbers inside the array is " << Sum;
}