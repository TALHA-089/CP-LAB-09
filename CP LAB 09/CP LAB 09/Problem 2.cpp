#include<iostream>
using namespace std;

int main()
{
	int array[4];

	array[0] = 4;
	array[1] = 9;
	array[2] = 1;
	array[3] = 3;

	cout << "\n\nUn-Sorted List: ";

	for (int i = 0; i < 4; i++)
	{
		cout << array[i] << "\t";
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 4; j++)
		{
			if (array[j] < array[i])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << "\n\nSorted List: ";

	for (int i = 0; i < 4; i++)
	{
		cout << "\t" << array[i] ;
	}


	cout << endl << endl;
	system("pause");
	return 0;
}