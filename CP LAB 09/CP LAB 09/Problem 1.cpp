#include<iostream>
using namespace std;

int main()
{
	int array[10];
	int even_counter = 0;
	int odd_counter = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter Number " << i + 1 << " : ";
		cin >> array[i];

		if (array[i] % 2 == 0)
		{
			even_counter += 1;
		}
		else
		{
			odd_counter += 1;
		}

	}

	cout << "\n\nEntered Values: ";

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << "\t";
	}

	cout << "\n\nEven Number in the Array: " << even_counter;
	cout << "\n\nOdd Numbers in the Array: " << odd_counter;

	

	cout << endl<< endl;
	system("pause");
	return 0;
}