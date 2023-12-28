#include<iostream>
using namespace std;

int main()
{
	int array[4][3] = { {1,2,3},{2,4,6},{3,5,-7},{-1,4,8} };

	cout << "\n\nARRAY: ";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		
			cout << "\t" << array[i][j];
			
		}
		cout << endl;
	}

	cout << "\n\nNegative Numbers in the array: ";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (array[i][j] < 0)
			{
				cout <<"\t" << array[i][j];
			}
		}
	}

	cout << endl << endl;
	system("pause");
	return 0;
}